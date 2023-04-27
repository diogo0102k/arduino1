 const int bot = 5; //id do botão
 const int led = 4; // pin / ligar LED
 int est_bot = 0; //estado do botão

 bool press = false;
 bool texto = false;

void setup() {
  Serial.begin(115200);

//pinMode(bot, INPUT_PULLUP);
pinMode(led, OUTPUT);
pinMode(est_bot, INPUT);


}

void loop() {
  
   
digitalWrite(led, digitalRead(bot));


 if (digitalRead(bot) && !texto && !press) {
   Serial.println("Mensagem a ser enviada apenas uma vez"); // código para enviar a mensagem
   texto = true; // atualiza a variável para indicar que a mensagem foi enviada
   press = true; // atualiza a variável para indicar que o botão foi pressionado

   return; //codigo abaixo n vai ser lido se tiver true
} 

 if (!digitalRead(bot) && press) {
    Serial.println("mensagem 2");
    press = false; // resetar a variável para indicar que o botão foi liberado
  }

  delay(100); // evita que o programa execute com mt frequencia e consuma mais recursos que o necessário
}









 
 


