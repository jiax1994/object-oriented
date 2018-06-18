#ifndef _classePersonne_H
#define _classePersonne_H
#include <iostream>
#include <string>
#include <sstream>
#include "classDate.h"
using namespace std; 

#include "classDate.h"

class Personne {
	protected:
      string nom;
      string prenom;
      char sexe;
      Date naiss;
    public:
      
      Personne ( string, string, char );
      Personne ( string );
      ~Personne( );
      void affiche( string = "");
      bool cEstLui( string );
      
};

#endif
