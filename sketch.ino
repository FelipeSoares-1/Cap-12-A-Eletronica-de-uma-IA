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
  Serial.printf("\n1. - MONITORAMENTO CLIMÁTICO: Temperatura: %.2f °C | Umidade: %.2f %%\n", temperatura, umidade);

  if (umidade < 50) {
    Serial.println("1a - ALERTA E AÇÃO: Umidade baixa. Aumentando a irrigação.");
    // Aqui você pode acionar a bomba d'água
  } else {
    Serial.println("1a - ALERTA E AÇÃO: Umidade adequada. Irrigação normal.");
  }
}

void controleIrrigacao() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duracao = pulseIn(ECHO_PIN, HIGH);
  float distancia = duracao * 0.034 / 2;  // Converte para cm

  Serial.printf("\n2 - SENSOR HC-SR04 > Nível do tanque: %.2f cm \n", distancia);

  if (distancia > 10) {
    Serial.println("2a - ALERTA E AÇÃO: Nível de água insuficiente. Irrigação suspensa.");
  } else {
    Serial.println("2a - ALERTA E AÇÃO: Nível de água adequado. Irrigação ativada.");
    // Acionar bomba d'água
  }
}

void deteccaoPresenca() {
  int movimento = digitalRead(PIR_PIN);

  if (movimento) {
    Serial.println("\n3 - Teste de detectação de Movimento (PIR): Movimento detectado!");
    Serial.println("3a - ALERTA E AÇÃO: Movimento detectado! Acionando alarme.");
    // Pode acionar um alarme ou acender uma luz
  } else {
    Serial.println("3a - ALERTA: Sem movimento.");
  }
}

void ajusteIrrigacaoLuminosidade() {
  int luzAnalogica = analogRead(LDR_AO_PIN);

  Serial.printf("\n4 - Intensidade da luz: %d\n", luzAnalogica);

  if (luzAnalogica < 800) {
    Serial.println("4a - ALERTA E AÇÃO: Dia ensolarado. Reduzindo irrigação.");
  } else {
    Serial.println("4a - ALERTA E AÇÃO: Dia nublado. Aumentando irrigação.");
  }
}

void loop() {
  Serial.printf("\nINICIANDO TRATATIVAS DE DADOS\n");
  monitoramentoClimatico();
  controleIrrigacao();
  deteccaoPresenca();
  ajusteIrrigacaoLuminosidade();
  
  delay(5000);  // Espera 5 segundos antes de repetir
}


