#include <Servo.h>
Servo f_left_upper_hold;
Servo f_right_upper_hold;
Servo b_left_upper_hold;
Servo b_right_upper_hold;
Servo f_left_upper_mov;
Servo f_right_upper_mov;
Servo b_left_upper_mov;
Servo b_right_upper_mov;
Servo f_left_lower_mov;
Servo f_right_lower_mov;
Servo b_left_lower_mov;
Servo b_right_lower_mov;


void setup() {
  f_right_upper_hold.attach(2);
  f_left_upper_hold.attach(3);
  b_left_upper_hold.attach(26);
  b_right_upper_hold.attach(28);
  f_right_upper_mov.attach(5);
  f_left_upper_mov.attach(6);
  b_left_upper_mov.attach(11);
  b_right_upper_mov.attach(12);
  f_right_lower_mov.attach(8);
  f_left_lower_mov.attach(9);
  b_right_lower_mov.attach(22);
  b_left_lower_mov.attach(24);



  f_left_upper_hold.write(90);
  f_right_upper_hold.write(90);
  b_left_upper_hold.write(90);
  b_right_upper_hold.write(90);

  f_left_upper_mov.write(90); // intital == 90 simple
  f_right_upper_mov.write(90); // intial == 90 reverse

  b_left_upper_mov.write(90); //intial 90 simple
  b_right_upper_mov.write(90); //intial 90 reverse

  f_left_lower_mov.write(180); //intial 140
  f_right_lower_mov.write(0); // intial 0 

  b_right_lower_mov.write(0); // 140
  b_left_lower_mov.write(180); //0


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
  f_left_upper_hold.write(90);
  f_right_upper_hold.write(90);
  delay(100);
  f_left_upper_mov.write(90); // intital == 90 simple
  f_right_upper_mov.write(90);
  delay(100);
  f_left_lower_mov.write(140); //intial 140
  f_right_lower_mov.write(40); //0
  delay(10);
  
}
void back_stand_up(){
  b_left_upper_hold.write(90);
  b_right_upper_hold.write(90);
  delay(100);
  b_left_upper_mov.write(100); //intial 90 simple
  b_right_upper_mov.write(80); //intial 90 reverse
  delay(100);
  b_left_lower_mov.write(120); // 140
  b_right_lower_mov.write(60); //0
  delay(10);


}
void loop() {
  //right_back_mov();
  //left_back_mov();
  //front_stand_up();
  //back_stand_up();

}









