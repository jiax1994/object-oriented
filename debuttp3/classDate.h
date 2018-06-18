#ifndef _classeDate_H
#define _classeDate_H
#include <iostream>
#include <string> 
using namespace std;

class Date {
      int valide( int, int, int );     //fonction       checked
    protected:
      int jour, mois, annee;           //variables
    public:
      Date( );           //constructeur   checked
      ~Date( );                        //destructeur    checked
      void affiche( string = "");      //fonction
      int modifier( int, int, int );   //fonction
      bool plusGrande( Date );        //fonction 
      
};
#endif
