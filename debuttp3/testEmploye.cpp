#include "classEmploye.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	Employe moi("Alain Pilon 1972 12 31 M", "276123919 programmeur/analyste 85000.00 10000.00 2005 3 30");
	moi.getSalaire();
	moi.setPoste("directeur de Udem");
	moi.getPoste();
	moi.affiche();
	return 0;
}
