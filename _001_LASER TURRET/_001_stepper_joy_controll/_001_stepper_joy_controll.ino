#include<AFMotor.h>
AF_Stepper motor1(100,2);
AF_Stepper motor2(20,1);
int x,y;

void setup() {
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
//pinMode(A2,INPUT);

}

void loop() {

x=analogRead(A0);
Serial.println("x=");
Serial.print(x);

if (x>=600&&x<=1023)
{

    motor1.setSpeed(30);
    motor1.step(1,FORWARD,MICROSTEP);
    delay(10);
    
    
}
else if(x<500){
motor1.step(0,FORWARD,MICROSTEP);
}
//cccccccccccccccccccccccccccccccccccccccc

if (x<300)
{

    motor1.setSpeed(30);
    motor1.step(1,BACKWARD,MICROSTEP);
    delay(10);
    
    
}
else {
motor1.step(0,FORWARD,MICROSTEP);
}

//##########################################FOR VERTICAL MOTION ######################


y=analogRead(A1);
Serial.println("y=");
Serial.print(y);

if (y>=700&&y<=1023)
{

    motor2.setSpeed(30);
    motor2.step(1,FORWARD,MICROSTEP);
    delay(10);
    
    
}
else if(y<450){
motor2.step(0,FORWARD,MICROSTEP);
}
//cccccccccccccccccccccccccccccccccccccccc

if (y<300)
{

    motor2.setSpeed(30);
    motor2.step(1,BACKWARD,MICROSTEP);
    delay(10);
    
    
}
else {
motor2.step(0,FORWARD,MICROSTEP);
}
}
