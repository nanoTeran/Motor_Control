#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int iniciaMotor=0;
int terminaMotor=180;
int iniciaCabeza=0;
int terminaCabeza=365;
int giraMotor=0;
int giraCabeza=0;
int pinDatoServo=9;
int segundoMax=3;
int segundoMin=1;
int gradoDado[]={0,90,180,270,360};
int previoGiro=1;
int cantidadGrados=5;

void setup() {
  myservo.attach(pinDatoServo);  
}
void loop() {
int numAleatorio= random(segundoMin*1000,segundoMax*1000);
int gradoAleatorio=random(cantidadGrados);

  giraMotor = gradoDado[gradoAleatorio];
  if(giraMotor==previoGiro){}else
    {
    previoGiro=giraMotor;
  giraMotor = map(giraMotor,iniciaCabeza,terminaCabeza,iniciaMotor,terminaMotor);
  
  
  myservo.write(giraMotor);  // scale it to use it with the servo (value between 0 and 180)
  delay(numAleatorio);     
    
    }}
                    
