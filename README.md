# Robô Seguidor de Linha

## Papel desempenhado

Esse robô tem como finalidade seguir uma linha de tons escuros (quanto mais próximo da cor preta, melhor a reposta) através de 2 sensores que se localizam na frente do robô e que são responsáveis por dar a direção de movimento que os motores DC devem tomar. Os motores DC, nesse projeto, são controlados pelo módulo L298N.

## Techs

* [Arduino UNO](https://docs.arduino.cc/hardware/uno-rev3/): Placa microcontrolada utilizada para atribuir condições de funcionamento aos componentes;
* [2 Motores DC](https://www.eletrogate.com/motores-dc#:~:text=Motores%20DC%3A%20S%C3%A3o%20motores%20mais,que%20existe%20dentro%20do%20motor.): Componentes que realizam o movimento do robô;
* [Módulo Ponte H Dupla L298N](https://www.eletrogate.com/ponte-h-dupla-l298n?srsltid=AfmBOoq96OTkz9Uq8why3yEvzWdSEzsFIvvH-37Rrsql3tbSSVu1jCGy): Componente responsável pelo controle de velocidade e da direção dos 2 motores DC;
* [2 Módulos Sensores Infravermelhos](https://www.autocorerobotica.com.br/modulo-sensor-infravermelho-tcrt5000?srsltid=AfmBOoqTS_PDrjbxyPhR2xqtXstexd0mrHDN6pK3Eb9QsXcRUj3ri5qh): Componentes que determinam a direção de movimento a partir da luz de retorno captada;
