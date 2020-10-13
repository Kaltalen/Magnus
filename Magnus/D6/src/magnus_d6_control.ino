/*
 * KalTalens Magnus D12 Mockup
 */

//L298N 1
int magnet1pin1 = 2;
int magnet1pin2 = 3;
int magnet2pin1 = 4;
int magnet2pin2 = 5;

//L298N 2
int magnet3pin1 = 6;
int magnet3pin2 = 7;
int magnet4pin1 = 8;
int magnet4pin2 = 9;

void setup() 
{
  //initializing inputs
  //L298N 1
  pinMode(magnet1pin1, OUTPUT);
  pinMode(magnet1pin2, OUTPUT);
  pinMode(magnet2pin1, OUTPUT);
  pinMode(magnet2pin2, OUTPUT);
  //L298N 2
  pinMode(magnet3pin1, OUTPUT);
  pinMode(magnet3pin2, OUTPUT);
  pinMode(magnet4pin1, OUTPUT);
  pinMode(magnet4pin2, OUTPUT);
}

void loop() 
{
  digitalWrite(magnet1pin1, HIGH);
  digitalWrite(magnet1pin2, LOW);
  delay(100);
  digitalWrite(magnet1pin1, LOW);
  digitalWrite(magnet1pin2, LOW);
  
  digitalWrite(magnet2pin1, HIGH);
  digitalWrite(magnet2pin2, LOW);
  delay(100);
  digitalWrite(magnet2pin1, LOW);
  digitalWrite(magnet2pin2, LOW);
  
  digitalWrite(magnet3pin1, HIGH);
  digitalWrite(magnet3pin2, LOW);
  delay(100);
  digitalWrite(magnet3pin1, LOW);
  digitalWrite(magnet3pin2, LOW);
  
  digitalWrite(magnet4pin1, HIGH);
  digitalWrite(magnet4pin2, LOW);
  delay(100);
  digitalWrite(magnet4pin1, LOW);
  digitalWrite(magnet4pin2, LOW);
}