
void ChercheUneIssue() {
  Arret();
  
  if(LaVoieEstLibreToutAGauche()) {
   PivoteAGauche(); 
  }
  else {
   if(LaVoieEstLibreToutADroite()) {
      PivoteADroite();
   }
   else {
      DemiTour();
   }
  }
}
