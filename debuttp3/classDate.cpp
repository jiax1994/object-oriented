#include <iostream>
#include "classDate.h"

using namespace std;

Date::Date() {
	jour = 19; mois = 6; annee = 2017;
	
}
Date::~Date( ) {
	
}
int Date::valide( int j, int m, int a) {
	int maxJours = 31;
	switch (m) {
		case 4:
		case 6:
		case 9:
		case 11: maxJours = 30;
	}
	if (m == 2) {
		// attention: je ne valide pas les clauses... millénaire...
		if ((a % 4) == 0)
		    maxJours = 29;
		else
		    maxJours = 28;
	}
	return (j >= 1 && j <= maxJours);
}



int Date::modifier(int j, int m, int a){
	int v = 0;
	if (valide(j, m, a)){
		jour = j; mois = m; annee = a;
		v = 1;
	}
	
	return v;
	
}


bool Date::plusGrande(Date d){
	bool bo = false;
	if (d.annee < annee){
		bo = true;
    }
	else if(d.annee == annee && d.mois < mois){
	    bo = true;
    }   
	else if(d.annee == annee && d.mois == mois && d.jour < jour){
	    bo = true;
	}
	
	return bo;
}


void Date::affiche(string message){
	cout << message;
	cout << jour <<"/" << mois <<"/" <<annee <<endl;
}

