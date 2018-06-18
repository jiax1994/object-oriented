#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#include "classPersonne.h"
#include "classEmploye.h"


Employe::Employe(string pnamjs, string npsbemb) : Personne( pnamjs ){
	int ann, moo, joo;
	istringstream entree2(npsbemb);
	entree2 >> nas >> poste >> salaire >> bonus >> ann >> moo >>joo;
	embauche.modifier(joo, moo, ann);
	
}

float Employe::getSalaire( ){
	
    salaire = salaire + bonus;
    return salaire;
}

string Employe::getPoste( ){
	return poste;
}

bool Employe::setPoste( string nouveauPoste ){
	bool bbb = false;
	if (nouveauPoste != poste){
		poste = nouveauPoste;
		bbb = true;
	}
	return bbb;
}

void Employe::affiche() {
    
    Personne::affiche( ); 	
	cout<<"poste: " <<poste;
	cout<<" salaire: " <<salaire <<" ";
	cout<<" nas: " <<nas;
	embauche.affiche(" sa date de embauche est: ");
	
}


