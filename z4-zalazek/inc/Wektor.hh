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
     
   //Wektor();
   Wektor(float=0, float=0, float=0); 
   float operator * (Wektor) const ;
   Wektor operator * (float) const ;
   Wektor operator / (float) const ;
   Wektor operator + (Wektor) const;
   Wektor operator - (Wektor) const;
   float operator [] (int Ind) const {return wtab[Ind - 1];}
   float & operator [] (int Ind)  {return wtab[Ind - 1];}
};



std::istream& operator >> (std::istream &Strm, Wektor &Wek);

std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);




#endif
