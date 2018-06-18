#ifndef _CLASSEMPLOYE_H
#define _CLASSEMPLOYE_H

#include "classPersonne.h"
#include <iostream>
#include <string>
using namespace std;
class Employe : public Personne{
	private:
		string poste, nas;
		float salaire, bonus;
		Date embauche;
	public:
	    Employe(string, string);
		float getSalaire( );
		string getPoste( );
		bool setPoste( string );
		void affiche( );
		    
	
};
#endif
