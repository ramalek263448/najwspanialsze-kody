#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "rozmiar.h"

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class UkladRownanLiniowych {
  
  public:
   
   Macierz Mac;
   Wektor Wek;
   Wektor Roz;
   
   float Gaus (Macierz);
   bool Kalkulator ();
     
};



std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);

std::ostream& operator << (std::ostream &Strm, const UkladRownanLiniowych &UklRow);


#endif
