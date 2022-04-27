#include "Macierz.hh"

using namespace std;









istream& operator >> (istream &Strm, Macierz &Mac)
 {
 
  for(int i=0; i<ROZMIAR; ++i)
    Strm >> Mac.mtab[i];
    
 }   
 
 
 
ostream& operator << (ostream &Strm, const Macierz &Mac)
 {
  
  for(int i=0; i<ROZMIAR; ++i)
   {
    Strm << Mac.mtab[i];
    Strm << endl;
   }
 }
