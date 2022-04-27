//programme par Mortadha Hosni étudiant en mécatronique//
//program by Mortadha Hosni student in mechatronics//
//Programme qui permet de faire tourner 5 moteurs pas à pas, les deux selon l'axe Z tournent simultanément //
//Program which makes it possible to turn 5 stepper motors, the two along the Z axis turn simultaneously //
//Synchronisation de 2 moteurs //
//synchronization of 2 motors//
void setup() {
  pinMode(8,OUTPUT);  // DIR Pin 
  pinMode(9,OUTPUT);  // STEP Pin 
   pinMode(7,OUTPUT);  // DIR Pin 
  pinMode(6,OUTPUT);  // STEP Pin
   pinMode(5,OUTPUT);  // DIR Pin 
  pinMode(4,OUTPUT);  // STEP Pin
   pinMode(3,OUTPUT);  // DIR Pin 
  pinMode(2,OUTPUT);  // STEP Pin
     pinMode(22,OUTPUT);  // DIR Pin 
  pinMode(23,OUTPUT);  // STEP Pin  
}
void loop() {
  digitalWrite(8,LOW); // DIR sens1  
   digitalWrite(6,LOW);
  for(int x = 0; x < 3200; x++) {
    digitalWrite(9,HIGH);
     digitalWrite(7,HIGH); 
    delay(100); 
    digitalWrite(9,LOW); 
     digitalWrite(7,LOW);
    delay(100); }
   
    digitalWrite(4,LOW); // DIR sens1  
  for(int x = 0; x < 3200; x++) {
    digitalWrite(5,HIGH); 
    delay(1); 
    digitalWrite(5,LOW); 
    delay(1);  
  }
   digitalWrite(2,LOW); // DIR sens1  
  for(int x = 0; x < 3200; x++) {
    digitalWrite(3,HIGH); 
    delay(1); 
    digitalWrite(3,LOW); 
    delay(1); }
    digitalWrite(22,LOW); // DIR sens1  
  for(int x = 0; x < 3200; x++) {
    digitalWrite(23,HIGH); 
    delay(1); 
    digitalWrite(23,LOW); 
    delay(1); }
  delay(500); 
  digitalWrite(8,HIGH); // DIR sens2
  for(int x = 0; x < 3200; x++) {
    digitalWrite(9,HIGH); 
    delay(1); 
    digitalWrite(9,LOW); 
    delay(1); 
  }
    delay(500); 
  digitalWrite(6,HIGH); // DIR sens2
  for(int x = 0; x < 3200; x++) {
    digitalWrite(7,HIGH); 
    delay(1); 
    digitalWrite(7,LOW); 
    delay(1); 
    } 
  delay(500);
  digitalWrite(4,HIGH); // DIR sens2
  for(int x = 0; x < 3200; x++) {
    digitalWrite(5,HIGH); 
    delay(100); 
    digitalWrite(5,LOW); 
    delay(100);
    }
      delay(500);
      digitalWrite(2,HIGH); // DIR sens2
  for(int x = 0; x < 3200; x++) {
    digitalWrite(3,HIGH); 
    delay(100); 
    digitalWrite(3,LOW); 
    delay(100); 
    }
    delay(500); 
  digitalWrite(22,HIGH); // DIR sens2
  for(int x = 0; x < 3200; x++) {
    digitalWrite(23,HIGH); 
    delay(100); 
    digitalWrite(23,LOW); 
    delay(100); 
    }  
  delay(500);}   

  
