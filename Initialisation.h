
void Initialisation() {  
  pinMode(DOUT_LED, OUTPUT);
  digitalWrite(DOUT_LED, LOW);
  
  pinMode(DIN_BOUTON, INPUT);
  
  pinMode(DOUT_ULTRASONIC_TRIG, OUTPUT);
  pinMode(DIN_ULTRASONIC_ECHO, INPUT);
  
  digitalWrite(DOUT_ULTRASONIC_TRIG, LOW);
  
  pinMode(D0UT_MOTEUR_GAUCHE, OUTPUT);
  pinMode(D0UT_MOTEUR_DROIT, OUTPUT);
  
  digitalWrite(D0UT_MOTEUR_GAUCHE, LOW);
  digitalWrite(D0UT_MOTEUR_DROIT, LOW);
  
  servo.attach(PWM_SERVO);
  
  RegardeToutDroit();
}
