
bool changerEtat() {
  bool r = false;
  
  if(digitalRead(DIN_BOUTON) == HIGH && precedent == false) {
    r = true;
  }

  if(digitalRead(DIN_BOUTON) == HIGH) {
    precedent = true;
  }
  else {
    precedent = false;
  }

  return r;
}

