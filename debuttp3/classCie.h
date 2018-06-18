#ifndef CLASSCIE_H
#define CLASSCIE_H
#include <iostream>
#include <string>
#include "classEmploye.h"
using namespace std;
class Cie : public Employe{
	Employe tabemploye[25];
	int nb;
	string entreprise;
	public:
		Cie(string);
		void ajoutEmploye( string, string );
		Employe * chercheEmploye( string nom, string prenom, char sexe );
		float sommeSalaire( );
		Employe * plusVieux( );
		void affiche( );
};

#endif
