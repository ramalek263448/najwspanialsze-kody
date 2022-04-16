#include "Wektor.hh"

using namespace std;

/*Wektor::Wektor()
 {
  int i;
  for(i=0; i<ROZMIAR; ++i)
   this->wtab[i] = 0;
 }
*/ 
 
Wektor::Wektor(float x, float y, float z)
 {
  this->wtab[0] = x;
  this->wtab[1] = y;
  this->wtab[2] = z;
 
 }
 

istream& operator >> (istream &Strm, Wektor &Wek)
 {
  int i;
  
  
   for(i=0; i<ROZMIAR; ++i)
    Strm >> Wek.wtab[i];
    
  }
 
 
ostream& operator << (ostream &Strm, const Wektor &Wek) 
 {
  int i;
 
  Strm << "|" << "  ";
   for(i=0; i<ROZMIAR; ++i)
   Strm << Wek.wtab[i] << "  ";
   Strm << "|" << endl;
  } 
  

  
