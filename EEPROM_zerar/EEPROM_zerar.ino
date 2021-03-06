/*
 * Henrique Lagamba Canhette - hlcanhette@gmail.com
 * 
 * Programa que salva zero em todos os endereços de memoria da EEPROM.
 * No loop fica imprimindo no serial monitor o valor salvo em cada endereço da EEPROM para conferir.
 */

                                                                                                                                                                      #include <EEPROM.h> //biblioteca para salvar e ler da EEPROM

int zero = 0; //valor a ser salvo

void setup(){
  /*
   * Função EEPROM.write e EEPROM.read salva 8 bits (até 255 DEC) por endereço.
   * A EEPROM possui 1K, ou seja é endereçável de 0 a 1023.
   */
  Serial.begin(9600);
  for(int i=0; i<1025; i++){
    EEPROM.write(i,zero); // "i" é o endereço da memória e "zero" o valor a ser salvo no endereço
    }
  }

void loop(){
    for(int i=0; i<1025; i++){
    if(Serial.available() > 0){
      Serial.println(EEPROM.read(i)); //a função retorna o valor de 8 bits salvo no endereço "i" da memória
      }
    }
  }
