#include "classCie.h"
#include <iostream>

void resultat( Employe *e ) {
   	if (e) {
		cout << "J'ai trouv¨¦ : ";
		e->affiche( );
	} else 
		cout << "Je n'ai pas trouv¨¦ l'employ¨¦\n";
}

int main( ) {
	Cie tp3("Ma cie TP3");
	Employe *e;

   	e = tp3.plusVieux( );
   	if (e) {
		cout << "Le plus vieux employ¨¦ est: ";
		e->affiche();
	} else 
		cout << "Oups... il n'y a pas d'employ¨¦ dans la cie...\n";

    string id("Bob Larue 1965 12 31 M"), id2("276123919 Programmeur 35000.00 0.00 2005 3 20");
   	tp3.ajoutEmploye(id, id2);
    id = "Toto Larue 1966 10 12 M"; id2= "276123914 Programmeur/Analyste 55000.00 5000.00 2005 12 31";
   	tp3.ajoutEmploye(id, id2);
    id = "Lucie Larue 1960 2 10 F"; id2= "276123913 Analyste 75000.00 8000.00 2000 5 30";
   	tp3.ajoutEmploye(id, id2);
    id = "Roger Larue 1960 2 10 M"; id2= "276123912 Analyste 68000.00 6000.00 2000 1 22";
   	tp3.ajoutEmploye(id, id2);
    id = "Luce Larue 1958 10 2 F"; id2= "276123911 Chef 85000.00 40000.00 2000 1 05";
   	tp3.ajoutEmploye(id, id2);
    id = "Chose Larue 1959 10 1 F"; id2= "276123910 Directeur 105000.00 90000.00 1995 8 5";
   	tp3.ajoutEmploye(id, id2);
   	cout << "Le salaire total est: " << tp3.sommeSalaire( ) << endl;
   	e = tp3.chercheEmploye("Larue", "Bob", 'F');
	resultat(e);
   	e = tp3.chercheEmploye("Larue", "Bob", 'M');
	resultat(e);
   	e = tp3.chercheEmploye("Larue", "Chose", 'F');
	resultat(e);
   	e = tp3.plusVieux( );
   	if (e) {
		cout << "Le plus vieux employ¨¦ est: ";
		e->affiche();
	} else 
		cout << "Oups... il n'y a pas d'employ¨¦ dans la cie...\n";

    cout << "Fin du programme\n";
}
