void bluetoothControl()
{
  Serial.println("In Bluetooth Mode");
  Dabble.processInput(); { //Crucial in Grabbing and processing our Bluetooth inputs

  if(GamePad.isUpPressed())
  {
    Serial.println("Forward");
    digitalWrite(dirPin1, HIGH);
    digitalWrite(dirPin2, LOW);
    digitalWrite(dirPin3, HIGH);
    digitalWrite(dirPin4, LOW);
  }
  else if(GamePad.isDownPressed())
  {
    Serial.println("Reverse");
    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin2, HIGH);
    digitalWrite(dirPin3, LOW);
    digitalWrite(dirPin4, HIGH);
  }
  else if(GamePad.isRightPressed())
  {
    Serial.println("Left");
    digitalWrite(dirPin1, HIGH);
    digitalWrite(dirPin2, LOW);
    digitalWrite(dirPin3, LOW);
    digitalWrite(dirPin4, HIGH);
  }
  else if(GamePad.isLeftPressed())
  {
    Serial.println("RIGHT");
    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin2, HIGH);
    digitalWrite(dirPin3, HIGH);
    digitalWrite(dirPin4, LOW);
  }
 
  else
  {
    Serial.println("Stop");
    digitalWrite(dirPin1, LOW);
    digitalWrite(dirPin2, LOW);
    digitalWrite(dirPin3, LOW);
    digitalWrite(dirPin4, LOW);
  }

 if(GamePad.isTrianglePressed())
  {
    slowLookDownCompartment();
  }
  else if(GamePad.isCrossPressed())
  {
    turnLook();
  }
  else if(GamePad.isCirclePressed())
  {
    comOpenLookUp();
  }
  else if(GamePad.isSquarePressed())
  {
   raiseArmsSayWalle();
  }
 if(GamePad.isSelectPressed())
 {
   playback(sample, sizeof(sample));
 }
 if(GamePad.isStartPressed())
 {
  singleClick();
 }
}
}
