
float DistanceDuMur() {
  digitalWrite(ULTRASONIC_TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(ULTRASONIC_TRIG_PIN, LOW);
  
  return pulseIn(ULTRASONIC_ECHO_PIN, HIGH) / 58.0f;
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
