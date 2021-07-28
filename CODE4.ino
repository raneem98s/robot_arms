#include <Servo.h>

//Define the servos

Servo ServoRight1;

Servo ServoRight2;

Servo ServoRight3;

Servo ServoLeft4;

Servo ServoLeft5;

Servo ServoLeft6;



 int pos =0;

  void setup() 
 {  

 ServoRight1.attach(3);
 ServoRight2.attach(5);
 ServoRight3.attach(6);
 ServoLeft4.attach(11);
ServoLeft5.attach(10);
ServoLeft6.attach(9);


}

 void loop ()
{

 //first movement

for (pos = 0; pos <= 90; pos += 1)
{
      
      ServoRight1.write(pos);             
      ServoRight2.write(pos);
      ServoRight3.write(pos);             
      ServoLeft4.write(pos);
      ServoLeft5.write(pos);              
      ServoLeft6.write(pos);
      delay(30);

    
       
     
}



for (pos = 90; pos <= 0; pos -= 1)
{
      
      ServoRight1.write(pos);             
      ServoRight2.write(pos);
      ServoRight3.write(pos);             
      ServoLeft4.write(pos);
      ServoLeft5.write(pos);              
      ServoLeft6.write(pos);
      delay(30);

    
     
}
delay(3000);
         
 //second movement        

for (pos = 0; pos <= 45; pos += 1)
{
     
      
      ServoRight1.write(pos);              
      ServoRight2.write(pos);
      ServoLeft4.write(pos);
      ServoLeft5.write(pos);              
      
      delay(15);
     
      for (pos = 0; pos <= 90; pos += 1){
      ServoRight3.write(pos); 
      ServoLeft6.write(pos);
        delay(30);
      
     
     
}


for (pos = 45; pos <= 0; pos -= 1)
{
      
      ServoRight1.write(pos);             
      ServoRight2.write(pos);
       ServoLeft4.write(pos);
      ServoLeft5.write(pos);              
      
      delay(15);

      for (pos = 90; pos <= 0; pos -= 1){
      ServoRight3.write(pos); 
      ServoLeft6.write(pos);
        delay(30);

    
       
}

delay(3000);

//third movement

 for (pos = 45; pos <= 110; pos += 1)
 {
                    
     
     
      ServoRight2.write(pos);
      ServoRight3.write(pos);              
      delay(15);
       
      ServoLeft5.write(pos);              
      ServoLeft6.write(pos);
      delay(30);

      
       
       
    
}
 for (pos = 110; pos <= 45; pos -= 1)
{
      ServoRight2.write(pos);
      ServoRight3.write(pos);              
        delay(15);
       
      ServoLeft5.write(pos);              
      ServoLeft6.write(pos);
        delay(30);

      
       
       
   }
    delay(3000);
}

}
}
