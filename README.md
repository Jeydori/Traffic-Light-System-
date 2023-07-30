# Traffic-Light-System-
Traffic Light System (w/ and w/o left turn)

<img width="694" alt="image" src="https://github.com/Jeydori/Traffic-Light-System-/assets/92672461/4ed2c907-f074-4900-9d04-77bdaa1013ac">

Welcome to this comprehensive tutorial on a fascinating electronic project – simulating and building a traffic light system using Tinkercad! In this guide, we will embark on a journey to explore the realm of electronics and programming, enabling you to create a virtual traffic light system from scratch.

Throughout this tutorial, we will delve into the foundational knowledge needed to understand the traffic light system's intricate workings. With a firm grasp of Tinkercad's interface, we will progress to assembling the components, step-by-step, on the virtual breadboard, bringing our traffic light system to life.

As you immerse yourself in this tutorial, you will gain a deeper understanding of electronic components, circuit design, and programming concepts. The valuable knowledge acquired here will empower you to explore and create your own electronic marvels beyond the realm of traffic lights.

So, let's buckle up and embark on this exciting adventure of electronic simulation and traffic light engineering! By the end, you'll have honed your skills and be able to amaze others with your newfound abilities. Let the journey begin!

Needed Components:
  1. 4x Green LED
  <img width="143" alt="image" src="https://github.com/Jeydori/Traffic-Light-System-/assets/92672461/e852af2b-a5f1-447f-acf7-3e2f014ff374">
  2. 4x Red LED
  <img width="126" alt="image" src="https://github.com/Jeydori/Traffic-Light-System-/assets/92672461/ccc6ecda-92f9-4c44-a98a-a56ea5e9c6bd">
  3. 4x Orange LED
  <img width="89" alt="image" src="https://github.com/Jeydori/Traffic-Light-System-/assets/92672461/d47c89b9-1061-4dcc-8a23-8d3d0029aee6">
  4. 12x 220-470 ohm resistor
  <img width="146" alt="image" src="https://github.com/Jeydori/Traffic-Light-System-/assets/92672461/03585b92-4628-4a32-804e-b393a7cfe76b">
  <img width="164" alt="image" src="https://github.com/Jeydori/Traffic-Light-System-/assets/92672461/6f3962cc-b209-46dd-8119-61ae915768ff">
  5. 1x breadboard
  <img width="151" alt="image" src="https://github.com/Jeydori/Traffic-Light-System-/assets/92672461/c0a4a434-33dd-4376-9bdd-bbe15d2cf894">
  6. 1x Arduino Uno
  <img width="155" alt="image" src="https://github.com/Jeydori/Traffic-Light-System-/assets/92672461/f9d96fd5-1b0b-4dcd-8d0b-153073e97ef2">
  7. solid wires (for the actual system)
  <img width="157" alt="image" src="https://github.com/Jeydori/Traffic-Light-System-/assets/92672461/da601f62-408f-4ad0-b803-cab4e41a524b">


First step will be simulation, we will be using Tinkercad as the simulation tool in this tutorial. Therefore, open tinkercad (www.tinkercad.com). Sign in if you already have an account. If not, go to sign up to create your account.

Now find the above components in the tinkercad then connect them to their respective pins. Note: Place a resistor between the anode of the LED and the arduino pins.

        Pin #2 = North Green
        Pin #3 = North Orange
        Pin #4 = North Red
        Pin #5 = South Green
        Pin #6 = South Orange
        Pin #7 = South Red
        Pin #8 = West Green
        Pin #9 = West Orange
        Pin #10 = West Red
        Pin #11 = East Green
        Pin #12 = East Orange
        Pin #13 = East Red
        GNDs of pins should be in series then connects to the GND pin of the Arduino.

Next, upload this arduino sketch:
  with left turn:
  https://github.com/Jeydori/Traffic-Light-System-/blob/main/with_left_turn_tfs.ino

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
              seq(4); delay(5000);
              seq(5); delay(1000);
              seq(6); delay(5000);
              seq(7); delay(1000);
            }
            
            void seq(int number){
              switch(number){
               case 0: 
              digitalWrite(LEDs[2], 0);
              digitalWrite(LEDs[10], 0);  
              digitalWrite(LEDs[0], 1);
              digitalWrite(LEDs[5], 1);   
              digitalWrite(LEDs[8], 1);
              digitalWrite(LEDs[11], 1);
                break;
                
               case 1: 
              digitalWrite(LEDs[0], 0);
              digitalWrite(LEDs[1], 1);   
                break;
            
                
               case 2: 
              digitalWrite(LEDs[1], 0);
              digitalWrite(LEDs[5], 0);
              digitalWrite(LEDs[2], 1);
              digitalWrite(LEDs[3], 1);
                break;
                
               case 3: 
              digitalWrite(LEDs[3], 0);
              digitalWrite(LEDs[4], 1);
                break;
                
                
               case 4: 
              digitalWrite(LEDs[4], 0);
              digitalWrite(LEDs[8], 0);
              digitalWrite(LEDs[5], 1);
              digitalWrite(LEDs[6], 1);
                break;
                
               case 5: 
              digitalWrite(LEDs[6], 0);
              digitalWrite(LEDs[7], 1);
                break;
                
               
               case 6: 
              digitalWrite(LEDs[7], 0);
              digitalWrite(LEDs[11], 0);
              digitalWrite(LEDs[8], 1);
              digitalWrite(LEDs[9], 1);
                break; 
                
               case 7: 
              digitalWrite(LEDs[9], 0);
              digitalWrite(LEDs[10], 1);
                break; 
              }
            }


  without left turn:
  https://github.com/Jeydori/Traffic-Light-System-/blob/main/without_left_turn_tfs.ino

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


        
