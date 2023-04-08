void standby()
{
  randNumber = random(0,5);
  Serial.println("Random # =");
  Serial.println(randNumber);
  switch (randNumber) {
    case 0: 
      comOpenLookUp();
      break;
    case 1: 
      turnLook();
      break;
    case 2: 
      raiseArmsSayWalle();
      break;
    case 3: 
      slowLookDownCompartment();
      break;
  delay(100);
  }
}
void comOpenLookUp()
{
 headTiltPos = servoAdjust(headTilt, 80, headTiltPos);
 leftArmPos = servoAdjust(leftArm, -60, leftArmPos);
 rightArmPos = servoAdjust(rightArm, 60, rightArmPos);
 singleClick();//Opens Compartment
    digitalWrite(dirPin1, HIGH);
    digitalWrite(dirPin2, LOW);
    digitalWrite(dirPin3, LOW);
    digitalWrite(dirPin4, HIGH);
    delay(1200);
    playback(sample, sizeof(sample));
    delay(1200);
    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin2, LOW);
    digitalWrite(dirPin3, LOW);
    digitalWrite(dirPin4, LOW);
 initServos();
 
}
void turnLook()
{
  if(turned)
  {
  digitalWrite(dirPin1, HIGH);
  digitalWrite(dirPin2, LOW);
  digitalWrite(dirPin3, LOW);
  digitalWrite(dirPin4, HIGH);
  delay(100);
  headPos = servoAdjust(head, 60, headPos);
  delay(300);
  turned = false;
  headTiltPos = servoAdjust(headTilt, 80, headTiltPos);
  }
else
{
  digitalWrite(dirPin1, LOW);
  digitalWrite(dirPin2, HIGH);
  digitalWrite(dirPin3, HIGH);
  digitalWrite(dirPin4, LOW);
  delay(100);
  headPos = servoAdjust(head, -60, headPos);
  delay(300);
  turned = true;
  headTiltPos = servoAdjust(headTilt, 80, headTiltPos);
}
    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin2, LOW);
    digitalWrite(dirPin3, LOW);
    digitalWrite(dirPin4, LOW);
    delay(1200);
    initServos();
}
void raiseArmsSayWalle()
{
 headTiltPos = servoAdjust(headTilt, 80, headTiltPos);
 leftArmPos = servoAdjust(leftArm, -60, leftArmPos);
 rightArmPos = servoAdjust(rightArm, 60, rightArmPos);
 playback(sample, sizeof(sample));
 initServos();
}

void slowLookDownCompartment()
{
  headTiltPos = servoAdjust(headTilt, -30, headTiltPos);
  compartmentPos = servoAdjust(compartment, 30, compartmentPos);
  delay(200);
  compartmentPos = servoAdjust(compartment, 30, compartmentPos);
  headTiltPos = servoAdjust(headTilt, 80, headTiltPos);
  delay(400);
  headTiltPos = servoAdjust(headTilt, -80, headTiltPos);
  delay(600);
  compartmentPos = servoAdjust(compartment, 90, compartmentPos);
  leftArmPos = servoAdjust(leftArm, -60, leftArmPos);
  rightArmPos = servoAdjust(rightArm, 60, rightArmPos);
  delay(1200);
  initServos(); 
}
