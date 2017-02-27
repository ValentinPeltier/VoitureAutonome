
void AvanceEnLigneDroite() {
  analogWrite(D0UT_MOTEUR_GAUCHE,vitesseMoteurGauche);
  analogWrite(D0UT_MOTEUR_DROIT,vitesseMoteurDroit);
  
  laVoitureEstAlArret = false;
}

void Arret() {
  analogWrite(D0UT_MOTEUR_GAUCHE,0);
  analogWrite(D0UT_MOTEUR_DROIT,0);
  
  laVoitureEstAlArret = true;
}

void PivoteAGauche() {
  analogWrite(D0UT_MOTEUR_GAUCHE,0);
  analogWrite(D0UT_MOTEUR_DROIT,vitesseMoteurDroit);
  
  delay(dureePourPivoter);
  
  analogWrite(D0UT_MOTEUR_GAUCHE,0);  
  analogWrite(D0UT_MOTEUR_DROIT,0);
  
  laVoitureEstAlArret = true;
}

void PivoteADroite() {
  analogWrite(D0UT_MOTEUR_GAUCHE,vitesseMoteurGauche);
  analogWrite(D0UT_MOTEUR_DROIT,0);
  
  delay(dureePourPivoter);
  
  analogWrite(D0UT_MOTEUR_GAUCHE,0); 
  analogWrite(D0UT_MOTEUR_DROIT,0);
  
  laVoitureEstAlArret = true;
}

void DemiTour() {
  analogWrite(D0UT_MOTEUR_GAUCHE,vitesseMoteurGauche);
  analogWrite(D0UT_MOTEUR_DROIT,0);
  
  delay(dureeDunDemiTour);
  
  analogWrite(D0UT_MOTEUR_GAUCHE,0);  
  analogWrite(D0UT_MOTEUR_DROIT,0);
  
  laVoitureEstAlArret = true;
}
