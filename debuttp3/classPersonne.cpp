#include "classDate.h" 
#include "classPersonne.h"
#include <iostream>
#include <string>
using namespace std;

Personne::~Personne( ) {
}
void Personne::affiche( string message ) {
   cout << message << prenom << ", " << nom;
   cout << " sexe: " << sexe;
   cout << " sa date de naissance est: ";
   naiss.affiche( );
}

Personne::Personne(string n, string p, char s) : naiss(){
	nom = n;
	prenom = p;
	sexe = s;
	
}

Personne::Personne(string text){
	
	int jo, mo, an;	
	
	istringstream entree(text);	
	entree >> prenom >> nom >> an >>mo >>jo >> sexe;
	
	naiss.modifier(jo, mo, an);
	
}

bool Personne::cEstLui(string nomPrenomSexe){
	bool boo = true;
	
	int i, j, k, h;
	i=nomPrenomSexe.find(nom);
	j=nomPrenomSexe.find(prenom);
	k=nomPrenomSexe.find(sexe);
	h=nomPrenomSexe.size();
	if(i<0 || i>h || j<0 || j>h || k<0 || k>h ){
		boo = false;		
	}
	cout<<"boo=" <<boo;
	return boo;	
}
