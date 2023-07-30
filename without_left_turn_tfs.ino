// C++ code
//

int LEDs[12] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

void setup()
{
  for(int i = 0; i <12; i++){
  	pinMode(LEDs[i], OUTPUT);
  }  
}

void loop()
{
  seq(0); delay(5000);
  seq(1); delay(1000);
  seq(2); delay(5000);
  seq(3); delay(1000);
}

void seq(int number){
  switch(number){
   case 0: 
  digitalWrite(LEDs[7], 0);
  digitalWrite(LEDs[10], 0);
  digitalWrite(LEDs[2], 0);
  digitalWrite(LEDs[5], 0);   
  digitalWrite(LEDs[0], 1);
  digitalWrite(LEDs[3], 1);
  digitalWrite(LEDs[8], 1);
  digitalWrite(LEDs[11], 1);
    break;
    
   case 1: 
  digitalWrite(LEDs[0], 0);
  digitalWrite(LEDs[3], 0);
  digitalWrite(LEDs[1], 1);
  digitalWrite(LEDs[4], 1);
    break;
    
   case 2: 
  digitalWrite(LEDs[1], 0);
  digitalWrite(LEDs[4], 0);
  digitalWrite(LEDs[8], 0);
  digitalWrite(LEDs[11], 0);
  digitalWrite(LEDs[2], 1);
  digitalWrite(LEDs[5], 1);
  digitalWrite(LEDs[6], 1);
  digitalWrite(LEDs[9], 1);
    break;
   
   case 3: 
  digitalWrite(LEDs[6], 0);
  digitalWrite(LEDs[9], 0);
  digitalWrite(LEDs[7], 1);
  digitalWrite(LEDs[10], 1);
    break; 
  }
}