
void AvanceEnLigneDroite() {
  analogWrite(MOTEUR_GAUCHE_PIN,vitesseMoteurGauche);
  analogWrite(MOTEUR_DROIT_PIN,vitesseMoteurDroit);
  
  laVoitureEstAlArret = false;
}

void Arret() {
  analogWrite(MOTEUR_GAUCHE_PIN,0);
  analogWrite(MOTEUR_DROIT_PIN,0);
  
  laVoitureEstAlArret = true;
}

void PivoteAGauche() {
  analogWrite(MOTEUR_GAUCHE_PIN,0);
  analogWrite(MOTEUR_DROIT_PIN,vitesseMoteurDroit);
  
  delay(dureePourPivoter);
  
  analogWrite(MOTEUR_GAUCHE_PIN,0);  
  analogWrite(MOTEUR_DROIT_PIN,0);
  
  laVoitureEstAlArret = true;
}

void PivoteADroite() {
  analogWrite(MOTEUR_GAUCHE_PIN,vitesseMoteurGauche);
  analogWrite(MOTEUR_DROIT_PIN,0);
  
  delay(dureePourPivoter);
  
  analogWrite(MOTEUR_GAUCHE_PIN,0); 
  analogWrite(MOTEUR_DROIT_PIN,0);
  
  laVoitureEstAlArret = true;
}

void DemiTour() {
  analogWrite(MOTEUR_GAUCHE_PIN,vitesseMoteurGauche);
  analogWrite(MOTEUR_DROIT_PIN,0);
  
  delay(dureeDunDemiTour);
  
  analogWrite(MOTEUR_GAUCHE_PIN,0);  
  analogWrite(MOTEUR_DROIT_PIN,0);
  
  laVoitureEstAlArret = true;
}
