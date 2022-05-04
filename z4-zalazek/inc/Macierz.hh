#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "Wektor.hh"
#include "rozmiar.h"
#include <iostream>



class Macierz {
 
  public:
  
  Wektor mtab [ROZMIAR];
  
  Macierz Transponowanie() ;
  void Zamien(int, int);
  float operator() (int IndW , int IndK)const { return mtab[IndW - 1][IndK]; }
  float& operator() (int IndW , int IndK) { return mtab[IndW - 1][IndK]; }
};



std::istream& operator >> (std::istream &Strm, Macierz &Mac);

std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);


#endif
