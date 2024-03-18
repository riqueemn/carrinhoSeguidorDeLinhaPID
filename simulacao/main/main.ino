

String leitura;
int i = 0;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);

  Serial.begin(9600);


}

void loop() {

  while(i < 1){
    Serial.print("Voce se conectou");
    i++;
  }
  
  if(Serial.available() > 0){
    leitura = Serial.readString();

    int vel = leitura.toInt();

    analogWrite(11, vel);
    analogWrite(10, 0);
    
/*
    if(leitura.equals("255")){
      //Serial.println("teste");
      analogWrite(11, vel);
      analogWrite(10, 0);
    } else if(leitura.equals("0")){
      analogWrite(11, 0);
      analogWrite(10, 0);
    }
    */
  }

  

}
