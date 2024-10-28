// https://github.com/adafruit/DHT-sensor-library
#include <DHT.h>

#define DHTPIN 15           // Pino de dados do DHT22
#define DHTTYPE DHT22       // Tipo do sensor DHT
DHT dht(DHTPIN, DHTTYPE);   // Inicializa o sensor DHT22

// Definições dos pinos do HC-SR04 (sensor ultrassônico)
#define TRIG_PIN 5
#define ECHO_PIN 18

// Definições do pino do PIR (sensor de movimento)
#define PIR_PIN 23

// Definições dos pinos do LDR (sensor de luz)
#define LDR_AO_PIN 34  // Pino analógico

void setup() {
  Serial.begin(115200); // Inicia a comunicação serial

  // Inicializa o sensor DHT22
  dht.begin();

  // Configura os pinos do HC-SR04
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Configura o pino do PIR
  pinMode(PIR_PIN, INPUT);

  // Sem necessidade de configurar o LDR_AO_PIN (entrada analógica)
}

void monitoramentoClimatico() {
  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();

  if (isnan(temperatura) || isnan(umidade)) {
    Serial.println("Erro na leitura do DHT22!");
    return;
  }

  Serial.printf("Temperatura: %.2f °C | Umidade: %.2f %%\n", temperatura, umidade);

  if (umidade < 50) {
    Serial.println("Umidade baixa. Aumentando a irrigação.");
    // Aqui você pode acionar a bomba d'água
  } else {
    Serial.println("Umidade adequada. Irrigação normal.");
  }
}

void controleIrrigacao() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duracao = pulseIn(ECHO_PIN, HIGH);
  

  long duracao = pulseIn(ECHO_PIN, HIGH);
  float distancia = duracao * 0.034 / 2;  // Converte para cm

  Serial.printf("Nível do tanque: %.2f cm\n", distancia);

  if (distancia > 10) {
    Serial.println("Nível de água insuficiente. Irrigação suspensa.");
  } else {
    Serial.println("Nível de água adequado. Irrigação ativada.");
    // Acionar bomba d'água
  }
}

void deteccaoPresenca() {
  int movimento = digitalRead(PIR_PIN);

  if (movimento) {
    Serial.println("Movimento detectado! Acionando alarme.");
    // Pode acionar um alarme ou acender uma luz
  } else {
    Serial.println("Sem movimento.");
  }
}

void ajusteIrrigacaoLuminosidade() {
  int luzAnalogica = analogRead(LDR_AO_PIN);

  Serial.printf("Intensidade da luz: %d\n", luzAnalogica);

  if (luzAnalogica < 800) {
    Serial.println("Dia ensolarado. Reduzindo irrigação.");
  } else {
    Serial.println("Dia nublado. Aumentando irrigação.");
  }
}

void loop() {
  monitoramentoClimatico();
  controleIrrigacao();
  deteccaoPresenca();
  ajusteIrrigacaoLuminosidade();
  
  delay(5000);  // Espera 5 segundos antes de repetir
}


