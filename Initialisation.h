
void Initialisation() {  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  
  pinMode(BOUTON_PIN, INPUT);
  
  pinMode(ULTRASONIC_TRIG_PIN, OUTPUT);
  pinMode(ULTRASONIC_ECHO_PIN, INPUT);
  
  digitalWrite(ULTRASONIC_TRIG_PIN, LOW);
  
  pinMode(MOTEUR_GAUCHE_PIN, OUTPUT);
  pinMode(MOTEUR_DROIT_PIN, OUTPUT);
  
  digitalWrite(MOTEUR_GAUCHE_PIN, LOW);
  digitalWrite(MOTEUR_DROIT_PIN, LOW);
  
  servo.attach(SERVO_PIN);
  
  RegardeToutDroit();
}
