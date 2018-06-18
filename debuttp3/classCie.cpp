#include "classCie.h"
#include <iostream>
#include <string>
using namespace std;
Cie::Cie(string ent){
    nb = 0;
    entreprise = ent;
}

void Cie::ajoutEmploye(string strPers, string strEmp) {
	tabemploye[nb++] = new Employe(strPers, strEmp);
	nb++;
}

Employe Cie::* chercheEmploye( string nom, string prenom, char sexe ){
	int a, b, c;
	for (i=0, i<=nb, i++){
	    d=tabemploye[i].size();
	    a=tabemploye[i]->cEstLui( nom );
	    b=tabemploye[i]->cEstLui( prenom );
	    c=tabemploye[i]->cEstLui( sexe );
	    if (a!=0 && b!=0 && c!=0 && a<=d && b<=d && c<=d)
    }
}
