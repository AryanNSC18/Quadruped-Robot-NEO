#include <Servo.h>
Servo f_left_upperhold;
Servo f_right_upperhold;
Servo b_left_upperhold;
Servo b_right_upperhold;
Servo right_upper_hold;
Servo f_left_upper_mov;
Servo f_right_upper_mov;
Servo b_left_upper_mov;
Servo b_right_upper_mov;
Servo f_left_lower_mov;
Servo f_right_lower_mov;
Servo b_left_lower_mov;
Servo b_right_lower_mov;


void setup() {
  // attachments  
  f_left_upper_mov.attach(5);
  f_right_upper_mov.attach(6);
  b_left_upper_mov.attach(11);
  b_right_upper_mov.attach(12);
  f_left_lower_mov.attach(8);
  f_right_lower_mov.attach(9);
  b_left_lower_mov.attach(22);
  b_right_lower_mov.attach(24);
  f_left_upperhold.attach(2);
  f_right_upperhold.attach(3);
  b_right_upperhold.attach(26);
  b_right_upperhold.attach(28);

  // phase -1 (std)
  f_left_upperhold.write(90);
  f_right_upperhold.write(90));
  b_right_upperhold.write(90);
  b_right_upperhold.write(90);
  f_left_upper_mov.write(90);
  f_right_upper_mov.write(90);
  b_left_upper_mov.write(90);
  b_right_upper_mov.write(90);
  f_left_lower_mov.attach(180);
  f_right_lower_mov.attach(0);
  b_left_lower_mov.attach(180);
  b_right_lower_mov.attach(0);
  
}

void intialization(){

  f_left_upperhold.write(90);
  f_right_upperhold.write(90);

  b_left_upperhold.write(90);
  b_right_upperhold.write(90);

  f_left_upper_mov.write(90); // intital == 90 simple
  f_right_upper_mov.write(90); // intial == 90 reverse

  b_left_upper_mov.write(90); //intial 90 simple
  b_right_upper_mov.write(90); //intial 90 reverse

  f_left_lower_mov.write(90); //intial 140
  f_right_lower_mov.write(90); // intial 0 

  b_left_lower_mov.write(90); // 140
  b_right_lower_mov.write(90); //0

}

void stand_up_neo(){
  // upper mov left/right l=60 r=120
  // lower mov l/r l=150 r=30
  f_left_upper_mov.write(60); 
  f_right_upper_mov.write(120); 

  b_left_upper_mov.write(60);
  b_right_upper_mov.write(120); 

  f_left_lower_mov.write(150);
  f_right_lower_mov.write(30);

  b_left_lower_mov.write(150);
  b_right_lower_mov.write(30);

}

int front = 0;
void right_back_mov()
{
  for (front=60;front<=100;front++){
    f_right_upper_mov.write(front);
    b_right_upper_mov.write(front);
    delay(10);
  }
  for (front=100; front>=60; front--) {
    f_right_upper_mov.write(front);
    b_right_upper_mov.write(front);
    delay(10);
  }
}
int left_front = 0;
void left_back_mov()
{
  for (left_front=60;left_front<=100;left_front++){
    f_left_upper_mov.write(left_front);
    b_left_upper_mov.write(left_front);
    delay(10);
  }
  for (left_front=100; left_front>=60; left_front--) {
    f_left_upper_mov.write(left_front);
    b_left_upper_mov.write(left_front);
    delay(10);
  }
}
void front_stand_up(){
  f_left_upper_mov.write(65); // intital == 90 simple
  f_right_upper_mov.write(65);
  f_left_lower_mov.write(70); //intial 140
  f_right_lower_mov.write(70); //0
  
}
void back_stand_up(){
  b_left_upper_mov.write(65); //intial 90 simple
  b_right_upper_mov.write(110); //intial 90 reverse
  b_left_lower_mov.write(70); // 140
  b_right_lower_mov.write(70); //0


}
void loop() {
  //stand_up_neo();
  //intialization();
  //right_back_mov();
  //left_back_mov();
  //front_stand_up();
  //back_stand_up();

}