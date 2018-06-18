#include <iostream>
#include "classDate.h"
#include <string>
#include <sstream>
using namespace std;
int main(){
	Date day;
	Date day2;
	day.affiche("date: ");
	day.modifier(1, 2, 2021);
	
	day.affiche("date: ");
	day.plusGrande(day2);
	
	
	return 0;
}
