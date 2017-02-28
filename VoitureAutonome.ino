
#include <Servo.h>
#include "AffectationEntreesSorties.h"
#include "DeclarationVariables.h"
#include "Configuration.h"
#include "DriverMoteur.h"
#include "DriverUltrason.h"
#include "DriverServomoteur.h"
#include "Initialisation.h"
#include "Bouton.h"
#include "ChercheUneIssue.h"

void setup() {
  Initialisation();
}

void loop() {
  
  if(changerEtat()) {
    voitureActive = !voitureActive;

    if(voitureActive) {
      digitalWrite(LED_PIN, HIGH);
    }
    else {
      digitalWrite(LED_PIN, LOW);
      Arret();
      RegardeToutDroit();
    }
  }
  
  if(voitureActive) {
    
    if(LaVoieEstLibreDevant()) {
      
      if(LaVoieEstLibreAGauche()) {
        
        if(LaVoieEstLibreADroite()) {
          
          if(laVoitureEstAlArret) {
            AvanceEnLigneDroite();
          }
          
        }
        else {
          ChercheUneIssue();
        }
        
      }
      else {
        ChercheUneIssue();
      }
      
    }
    else {
      ChercheUneIssue();
    }
    
  }
  
  delay(1);
}
