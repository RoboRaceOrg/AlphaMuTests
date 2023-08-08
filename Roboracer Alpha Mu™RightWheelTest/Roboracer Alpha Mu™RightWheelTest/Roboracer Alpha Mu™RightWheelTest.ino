//www.elegoo.com

//     Left motor truth table
//Here are some handy tables to show the various modes of operation.
//  ENA         IN1               IN2         Description  
//  LOW   Not Applicable    Not Applicable    Motor is off
//  HIGH        LOW               LOW         Motor is stopped (brakes)
//  HIGH        HIGH              LOW         Motor is on and turning forwards
//  HIGH        LOW               HIGH        Motor is on and turning backwards
//  HIGH        HIGH              HIGH        Motor is stopped (brakes)

// define IO pin
#define ENB 1
#define IN3 7
#define IN4 6

//init the car
void setup() {
  Serial.begin(9600);
  pinMode(IN3, OUTPUT);   //set IO pin mode OUTPUT
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
  digitalWrite(ENB, HIGH);//Enable left motor       
}

//mian loop
void loop() {
  digitalWrite(IN3, HIGH);      
  digitalWrite(IN4, LOW); //Right wheel turning forwards
  Serial.println("Right Wheel Forward");
  delay(500);             //delay 500ms
  digitalWrite(IN3, LOW);      
  digitalWrite(IN4, LOW); //Right wheel stoped
   Serial.println("Right Wheel Stopped");
  delay(500);
  digitalWrite(IN3, LOW);      
  digitalWrite(IN4, HIGH);//Right wheel turning backwards
   Serial.println("Right Wheel Backwards");
  delay(500);
  digitalWrite(IN3, HIGH);      
  digitalWrite(IN4, HIGH); //Right wheel stoped
  Serial.println("Right Wheel Stopped");
  delay(500);
}

