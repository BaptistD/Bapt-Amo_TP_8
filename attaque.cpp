#include "attaque.h"
#include <stdlib.h>
using namespace std;

attaque::attaque() {
  srand(time(NULL));
  int nombreMystere = (rand() % 2);
  this->type = nombreMystere;
}

attaque::attaque(int a) { this->type = a; }

int attaque::getTypeAttaque() const { return this->type; }

bool attaque::resoudreAttaque(attaque &a) const {
  // si attaque pierre
  if (this->type == 0) {
    // defaite
    if (a.type == 1) {
      return 0;
    }
    // victoire
    else if (a.type == 2) {
      return 1;
    }
    //égalité
    else {
      srand(time(NULL));
      bool nbr = (rand() % 1);
      return nbr;
    }
  }
  // si attaque feuille
  else if (this->type == 1) {
    // défaite
    if (a.type == 2) {
      return 0;
    }
    // victoire
    else if (a.type == 0) {
      return 1;
    }
    //égalité
    else {
      srand(time(NULL));
      bool nbr = (rand() % 1);
      return nbr;
    }
  }
  // si attaque ciseaux
  else if (this->type == 2) {
    // défaite
    if (a.type == 0) {
      return 0;
    }
    // victoire
    else if (a.type == 1) {
      return 1;
    }
    //égalité
    else {
      srand(time(NULL));
      bool nbr = (rand() % 1);
      return nbr;
    }
  }
}

string attaque::getNomAttaque() const {
  if (this->type == 0) {
    return "Pierre";
  } else if (this->type == 1) {
    return "Feuille";
  } else if (this->type == 2) {
    return "Ciseaux";
  }
}