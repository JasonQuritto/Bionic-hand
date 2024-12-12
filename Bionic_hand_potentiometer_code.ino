#include<Servo.h>
#include<PololuMaestro.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;

int val;

void setup() {
  // put your setup code here, to run once:
s1.attach(2);
s2.attach(3);
s3.attach(4);
s4.attach(5);
s5.attach(6);
  for (int i = 2; i<7; i++) {
    pinMode(i, OUTPUT);
  }


}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(0);
val = map(val, 0, 1023, 0, 180);
s1.write(val);
s2.write(val);
s3.write(val);
s4.write(val);
s5.write(val);

}
