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

void Macierz::Zamien(int i, int j)
 {
  Macierz Mtemp;
  
  Mtemp = *this;
  
  this->mtab[i] = Mtemp.mtab[j];
  this->mtab[j] = Mtemp.mtab[i];
  
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
