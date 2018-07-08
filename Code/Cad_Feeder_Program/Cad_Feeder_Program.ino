//initialize variables
int PUL=7; //define Pulse pin
int DIR=6; //define Direction pin
int ENA=5; //define Enable Pin

int FEED_BUTTON=2;//define feed button pin

int portion_size=5000;

void setup() 
{
//set pins
  pinMode (PUL, OUTPUT);
  pinMode (DIR, OUTPUT);
  pinMode (ENA, OUTPUT);
  
  pinMode (FEED_BUTTON, INPUT);
//read portion size

}

void loop() 
{
  //read portion size from potentiometer
  
//if its time, feed

//else if button pressed
  feeding_time=digitalRead(FEED_BUTTON);
  if (feeding_time=1)
  {
    feed_cat();
  }
  

}

void feed_cat()
{
  for (int i=0; i<portion_size; i++)    //Forward portion_size steps
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(50);
    digitalWrite(PUL,LOW);
    delayMicroseconds(50);
  }
}
