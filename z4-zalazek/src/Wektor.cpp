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


 
float Wektor::operator * (Wektor W2)  const
 {
  float a = 0;
   
   for(int i=0; i<ROZMIAR; ++i)
    a += this->wtab[i] * W2.wtab[i];
  
  return a;
 }
 
 
 
Wektor Wektor::operator * (float x) const
 { 
  Wektor W;
    
    for(int i=0; i<ROZMIAR; ++i)
     W.wtab[i] = this->wtab[i] * x; 
 
  return W;
 } 
 
 
Wektor Wektor::operator / (float x) const
 { 
  Wektor W;
    
    for(int i=0; i<ROZMIAR; ++i)
     W.wtab[i] = this->wtab[i] / x; 
 
  return W;
 }  

 
 
Wektor Wektor::operator + (Wektor W2) const
 {
  Wektor W;
  
    for(int i=0; i<ROZMIAR; ++i)
     W.wtab[i] = this->wtab[i] + W2.wtab[i] ;

   return W;
 }



Wektor Wektor::operator - (Wektor W2) const
 {
  Wektor W;
  
    for(int i=0; i<ROZMIAR; ++i)
     W.wtab[i] = this->wtab[i] - W2.wtab[i] ;

   return W;
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
  

  
