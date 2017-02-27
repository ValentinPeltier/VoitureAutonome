
Servo servo; 

void RegardeToutDroit() {
  servo.write(toutDroit);
  delay(dureePostionnementServo);
}

bool LaVoieEstLibreAvecServomoteurEnMouvement() {
  int i = 0;
  
  while(i < dureePostionnementServo) {
    float distance = DistanceDuMur();
    if(distance <= seuilDistance) {
      return false;
    }

    i += distance * 0.058;
  }

  return true;
}

bool LaVoieEstLibreDevant() {
  servo.write(toutDroit);
  return LaVoieEstLibreAvecServomoteurEnMouvement();
}

bool LaVoieEstLibreAGauche() {
  servo.write(aGauche);
  return LaVoieEstLibreAvecServomoteurEnMouvement();
}

bool LaVoieEstLibreADroite() {
  servo.write(aDroite);
  return LaVoieEstLibreAvecServomoteurEnMouvement();
}

bool LaVoieEstLibreToutAGauche() {
  servo.write(completementAGauche);
  return LaVoieEstLibreAvecServomoteurEnMouvement();
}

bool LaVoieEstLibreToutADroite() {
  servo.write(completementADroite);
  return LaVoieEstLibreAvecServomoteurEnMouvement();
}
