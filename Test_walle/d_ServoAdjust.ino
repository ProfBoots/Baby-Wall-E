int servoAdjust(int servoId, int degreeChange, int currentPos)
{
  int newValue = currentPos + degreeChange; 
  if(newValue <= 175 && newValue >= 5)
  { 
    adjustServo.attach(servoId);
    adjustServo.write(currentPos + degreeChange);
    delay(200);
    return newValue;
    adjustServo.detach();
  }
}
