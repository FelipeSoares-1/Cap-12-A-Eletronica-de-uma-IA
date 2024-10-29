# Sensores

## Padrão de Cores dos Fios

VCC (Alimentação) → Vermelho
GND (Terra) → Preto
Dados Digitais / Pulsos → Amarelo
Dados Analógicos → Verde

## Conexões dos Sensores no ESP32

### 1. DHT22 (Sensor de Umidade e Temperatura)

VCC → 3.3V (ESP32) (Fio Vermelho)
SDA → GPIO 15 (ESP32) (Fio Amarelo)
GND → GND (ESP32) (Fio Preto)

### 2. HC-SR04 (Sensor Ultrassônico)

VCC → 5V (ESP32) (Fio Vermelho)
TRIG → GPIO 5 (ESP32) (Fio Amarelo)
ECHO → GPIO 18 (ESP32) (Fio Amarelo)
GND → GND (ESP32) (Fio Preto)

### 3. PIR (Sensor de Movimento)

VCC → 3.3V (ESP32) (Fio Vermelho)
OUT → GPIO 23 (ESP32) (Fio Amarelo)
GND → GND (ESP32) (Fio Preto)

### 4. LDR (Fotoresistor)

VCC → 3.3V (ESP32) (Fio Vermelho)
GND → GND (ESP32) (Fio Preto)
DO → GPIO 19 (ESP32) (Fio Amarelo)
AO → GPIO 34 (ESP32) (Fio Verde)