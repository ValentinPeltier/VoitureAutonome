
bool changerEtat() {
  bool r = false;
  
  if(digitalRead(BOUTON_PIN) == HIGH && precedent == false) {
    r = true;
  }

  if(digitalRead(BOUTON_PIN) == HIGH) {
    precedent = true;
  }
  else {
    precedent = false;
  }

  return r;
}

