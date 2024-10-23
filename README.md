
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

## 📜 Descrição

Este projeto tem como objetivo a criação de um sistema de monitoramento utilizando a plataforma ESP32 e sensores específicos para ambientes. O circuito foi desenvolvido e simulado na plataforma Wokwi.com, onde cada sensor possui uma função específica dentro do sistema, permitindo o monitoramento de variáveis ambientais como temperatura, umidade e luminosidade.

## 🔧 Como Executar o Código

### Pré-requisitos
- [Wokwi](https://wokwi.com/) para simulação de circuitos.
- ESP32.
- IDE Arduino (opcional para programação local).

### Passo a Passo
1. Clone o repositório:
   ```bash
   git clone <link-do-repositorio>
   cd <nome-do-repositorio>
   ```
2. Abra o circuito no Wokwi:
   - Acesse Wokwi.com e importe o arquivo JSON fornecido no repositório.
3. Execute a simulação clicando em "Play".
4. Acompanhe o monitoramento pelo Monitor Serial do Wokwi.

## 🔌 Desenho do Circuito e Sensores Utilizados

- **DHT22**: Sensor de temperatura e umidade.
- **LDR**: Sensor de luminosidade.
- **HC-SR04**: Sensor ultrassônico para medição de distância.

Cada sensor desempenha uma função crítica no sistema, permitindo a coleta de dados essenciais para monitorar o ambiente.

## 📦 Testes Realizados

Durante o desenvolvimento, foram realizados testes para validar o funcionamento de cada sensor. Prints do Monitor Serial estão disponíveis na pasta `document/test-results`.

## 🗃 Histórico de Lançamentos

* 1.0.0 - 21/10/2024
    * Versão inicial do sistema com todos os sensores funcionando.
* 0.5.0 - XX/XX/2024
    * Ajustes nas leituras dos sensores.

## 📋 Licença

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1">
<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1">
<p>
Este projeto está licenciado sob a <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank">Licença Creative Commons Attribution 4.0 International</a>.
</p>
