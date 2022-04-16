#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Wektor {
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
  public:
  float wtab [ROZMIAR];
     
   Wektor();  
};



std::istream& operator >> (std::istream &Strm, Wektor &Wek);

std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);




#endif
