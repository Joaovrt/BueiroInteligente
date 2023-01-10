//Configurações do Dashboard
#include <Ubidots.h> //Biblioteca do Dashboard
const char* UBIDOTS_TOKEN = "";  //TOKEN do usuário do UBIDOTS
const char* WIFI_SSID = "";      //ID do Wi-Fi
const char* WIFI_PASS = "";  //Senha do Wi-Fi
const char* VARIABLE_LABEL = "";    //Nome do campo da variável do Dashboard
Ubidots ubidots(UBIDOTS_TOKEN, UBI_HTTP); //Inicialização do Dashboard


//Configurações do HC-SR04
#define pinTrig D7 //Pino trigger do HC-SR04
#define pinEcho D8 //Pino echo do HC-SR04
int calculaDistanciaCm(int triggerPin, int echoPin); //Função que calcula a distancia medida pelo sensor

//Definições do tamanho do coletor em cm
#define distMax 51
#define distMin 8


//Função setup, executada apenas uma vez
void setup() {    
  Serial.begin(115200); //Inicialização do monitor serial
  ubidots.wifiConnect(WIFI_SSID, WIFI_PASS);//Conexão com o Wi-fi       
 }


//Função loop, executada continuamente
void loop() {
  //Chama a função e armazena o resultado na variável
  int distancia = calculaDistanciaCm(pinTrig, pinEcho);

  //Imprime no monitor serial
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  //Converte o valor da distancia de 0 a 100 porcento do volume ocupado, de acordo com o recipiente
  int porcentagem = map(distancia,distMin,distMax,100,0);

  //Imprime no monitor serial
  Serial.print("Volume Ocupado: ");
  Serial.print(porcentagem);
  Serial.println("%");

  //Envia a informação para o Dashboard
  ubidots.add(VARIABLE_LABEL, porcentagem);

  //Obtem uma confirmação se o dado foi enviado
  bool bufferSent = false;
  bufferSent = ubidots.send();

  //Se o dado foi enviado corretamente
  if (bufferSent){
   //Imprime o texto abaixo no monitor serial
   Serial.println("O dado foi enviado corretamente!");
   Serial.println("--------------------------------");
   Serial.println("");
  }
  
  //Caso não foi
  else{
  //Imprime esse
   Serial.println("O dado não foi enviado corretamente!");
   Serial.println("------------------------------------");
   Serial.println("");
  }
  
  //Aguarda 1 hora
  delay(10000);
}


//Função que calcula a distancia medida pelo sensor
int calculaDistanciaCm(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);//Declara o pino trigger como saída
  pinMode(echoPin, INPUT);//Declara o pino echo como entrada
  //Reinicia o trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Deixa o pino de trigger ligado por 10 microsegundos
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  // Faz a leitura do pino echo e guarda o tempo de viagem da onda sonora em microsegundos na variável tempo
  long tempo = pulseIn(echoPin, HIGH);
  //Calculo da distância: tempo de viagem multiplicado pela velocidade do som em cm/microsegundos
  //divido por dois, pois o tempo é de ida e volta
  int distancia = tempo*0.03446/2;
  return distancia;//Retorna a distância em cm
}
