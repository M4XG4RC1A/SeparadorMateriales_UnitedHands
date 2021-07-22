#include <Servo.h>

Servo G1;
Servo G2;
Servo B1;
Servo B2;

int Aluminio = 0;
int Plastico = 0;
int Vidrio = 0;
void setup() {
  // put your setup code here, to run once:
  B1.attach(2);
  B2.attach(3);
  G1.attach(4);
  G2.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  Material = /Dato detectado;
  if(Material!=""){
  if (Material=="Aluminio"){
    G1.write(45);
    G2.write(45);
    Aluminio++;
  }
  if (Material=="Plastico"){
    G1.write(90);
    G2.write(90);
    Plastico++;
  }
  if (Material=="Vidrio"){
    G1.write(135);
    G2.write(135);
    Vidrio++;
  }
  B1.write(0);
  B2.write(180);
  delay(2000);
  Material="";
  B1.write(180);
  B2.write(0);
  }
}
