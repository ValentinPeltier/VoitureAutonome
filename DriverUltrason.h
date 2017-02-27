
float DistanceDuMur() {
  digitalWrite(DOUT_ULTRASONIC_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(DOUT_ULTRASONIC_TRIG, LOW);
  
  return pulseIn(DIN_ULTRASONIC_ECHO, HIGH) / 58.0f;
}

bool LaVoieEstLibre() {
  distanceMesuree = DistanceDuMur();
  
  if(seuilDistance <= distanceMesuree) {
    return true;
  }
  else {
    return false;
  }   
}
