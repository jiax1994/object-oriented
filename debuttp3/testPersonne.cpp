#include "classDate.h" 
#include "classPersonne.h"
#include <iostream>
using namespace std;
int main (){
	Personne p1("li", "jia", 'm');	
	Personne p2("jia li 1994 8 17 m");
	p2.affiche("la personne est: ");
    p2.cEstLui("li mike m");
	
	return 0;
}
