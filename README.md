
# FIAP - Faculdade de Informática e Administração Paulista

<p align="center">
<a href="https://www.fiap.com.br/"><img src="assets/logo-fiap.png" alt="FIAP - Faculdade de Informática e Administração Paulista" width="40%" height="40%"></a>
</p>

<br>

# A Eletronica de uma IA
# Sistema de Monitoramento com ESP32 e Sensores

## Grupo 47

## 👨‍🎓 Integrantes:
- [Caio Rodrigues Castro](https://www.linkedin.com/in/caiorcastro/)
- [Ederson Luiz Badeca dos Santos](https://www.linkedin.com/in/ederson-badeca/)
- [Felipe Soares Nascimento](https://www.linkedin.com/in/digitalmanagerfelipesoares/)
- [Lucas Ferreira Hillesheim](https://www.linkedin.com/in/lfhillesheim/)
- [Luís Fillipe Emidio](https://www.linkedin.com/in/luisfuturist/)

## 👩‍🏫 Professores:
### Tutor(a)
- [Lucas Gomes](https://www.linkedin.com/in/lucas-gomes-moreira-15a8452a/)
### Coordenador(a)
- [André Godoi Chiovato](https://www.linkedin.com/in/profandregodoi/)

## 📜 Objetivo

O objetivo deste projeto é desenvolver um sistema inteligente de monitoramento agrícola utilizando o microcontrolador ESP32 e uma combinação de sensores, incluindo DHT22, HC-SR04, PIR e LDR. O sistema visa coletar dados ambientais essenciais, como temperatura, umidade, nível de água, movimento e intensidade de luz, permitindo tomadas de decisão automatizadas para otimizar o uso de recursos hídricos e melhorar a segurança nas áreas agrícolas. Ao implementar esse sistema, espera-se aumentar a eficiência na irrigação, reduzir o desperdício de água e proporcionar um ambiente mais seguro e controlado para o cultivo, contribuindo assim para uma agricultura mais sustentável e produtiva.

Veja mais detalhes em: [Projeto](/docs/project.md)

## 🔌 Circuito

![Desenho do Circuito](/docs/circuit.png)

### Descrição do Papel de Cada Sensor no Sistema

1. **DHT22 - Monitoramento de Temperatura e Umidade**  
   Mede a temperatura e umidade do ambiente, dados essenciais para ajustar a irrigação conforme as condições climáticas.

2. **HC-SR04 - Detecção do Nível de Água**  
   Mede a distância até a superfície da água em reservatórios, garantindo que a irrigação só ocorra quando há nível suficiente.

3. **Sensor PIR - Detecção de Movimento**  
   Identifica presença de animais ou pessoas nas áreas monitoradas, ativando alertas de segurança para proteger a plantação.

4. **LDR - Monitoramento da Intensidade de Luz**  
   Avalia a quantidade de luz solar, ajustando a irrigação: menos água em dias ensolarados e mais em dias nublados, equilibrando a hidratação das plantas.

Para mais informações sobre os sensores, acesse: [Sensores](/docs/sensors.md)

## 🔧 Como Rodar o Projeto

### Pré-requisitos

- [Wokwi](https://wokwi.com/) para simulação de circuitos.
- ESP32.
- IDE Arduino (opcional para programação local).

### Passo a Passo

1. Abra o circuito no Wokwi: [Projeto no Wokwi](https://wokwi.com/projects/413042987882945537)
2. Execute a simulação clicando em "Play".
4. Acompanhe o monitoramento pelo Monitor Serial do Wokwi.

## 📦 Testes Realizados

Durante o desenvolvimento, foram realizados testes para validar o funcionamento de cada sensor.

<img src="./tests/boot.png" alt="Test" width="480" height="auto">
<img src="./tests/low_humidity.png" alt="Test" width="480" height="auto">

Mais prints do Monitor Serial estão disponíveis na pasta `tests/`.

## 📋 Licença

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1">
<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1">
<p>
Este projeto está licenciado sob a <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank">Licença Creative Commons Attribution 4.0 International</a>.
</p>
