#include "Macierz.hh"

using namespace std;


Macierz Macierz::Transponowanie()
{
 Macierz Mtemp;

 for(int i=1; i <= ROZMIAR; ++i)
  {
   for (int j=1; j <= ROZMIAR; ++j)
    {
     Mtemp.mtab[i-1][j] = this->mtab[j-1][i];
    }
  } 
  return Mtemp;
 } 



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
