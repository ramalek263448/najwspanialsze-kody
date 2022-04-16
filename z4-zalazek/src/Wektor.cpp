#include "Wektor.hh"

using namespace std;

Wektor::Wektor()
 {
  int i;
  for(i=0; i<ROZMIAR; ++i)
   this->wtab[i] = 0;
 }
 
 
 
 
 
 
 
 
 
 
 
ostream& operator << (ostream &Strm, const Wektor &Wek) 
 {
  int i;
 
  Strm << "|" << "  ";
   for(i=0; i<ROZMIAR; ++i)
   Strm << Wek.wtab[i] << "  ";
   Strm << "|" << endl;
  } 
