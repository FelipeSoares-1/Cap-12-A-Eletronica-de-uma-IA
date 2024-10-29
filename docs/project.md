# Sistema Inteligente de Monitoramento Agrícola com ESP32 e Sensores Integrados

Este projeto consiste em um sistema inteligente de monitoramento agrícola, projetado para operar com o microcontrolador ESP32 e uma série de sensores que coletam dados essenciais do ambiente. O sistema integra quatro tipos de sensores: o DHT22, que monitora a temperatura e a umidade; o HC-SR04, que mede o nível de água em reservatórios; o sensor PIR, que detecta movimentos de pessoas ou animais; e o LDR (Light Dependent Resistor), que avalia a intensidade da luz solar.

O DHT22 é fundamental para o controle climático da plantação, pois fornece informações em tempo real sobre as condições atmosféricas. Com esses dados, o sistema pode automatizar a irrigação, acionando bombas d'água apenas quando a umidade do solo estiver abaixo de um nível pré-definido, garantindo que as plantas recebam a quantidade adequada de água e evitando desperdícios.

O sensor HC-SR04 complementa o sistema ao monitorar o nível de água nos reservatórios, permitindo que o sistema interrompa a irrigação caso o nível esteja baixo, prevenindo danos à bomba e garantindo um uso responsável dos recursos hídricos.

A segurança da área agrícola é assegurada pelo sensor PIR, que detecta movimentos indesejados, seja de animais que possam causar danos às plantações ou de pessoas não autorizadas. Ao identificar movimento, o sistema pode emitir alertas ou acionar alarmes, contribuindo para a proteção dos cultivos.

Por fim, o sensor LDR ajusta a irrigação com base na quantidade de luz solar recebida. Em dias ensolarados, a irrigação pode ser reduzida para evitar excesso de água, enquanto em dias nublados, o sistema pode aumentar a irrigação para atender às necessidades das plantas.

Com essa combinação de sensores e a capacidade de automação proporcionada pelo ESP32, o sistema não apenas otimiza o uso de recursos, mas também melhora a eficiência geral da gestão agrícola, promovendo uma abordagem sustentável e inteligente para o cultivo.
