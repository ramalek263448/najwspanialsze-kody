#include "UkladRownanLiniowych.hh"

 using namespace std;

 float UkladRownanLiniowych::Gaus (Macierz M)
  {
  
  bool nparzy = 0;
  
   for (int i=0; i <ROZMIAR+1; ++i){
    for (int j=i+1; j <ROZMIAR; ++j){
      if (M(i+1,i+1) == 0){
        M.Zamien(i, j);
        nparzy =!nparzy;
      }
      else{
        M.mtab[j] = M.mtab[j] - M.mtab[i] * ( M(j+1,i+1) / M(i+1,i+1) );
      }
     }
    }
    float W = 1;
     for (int k=1;  k <= ROZMIAR; ++k){
       W *= M(k,k);
     }  
       if(!nparzy)
        W *= -1;
       return W;
  } 

 
 bool UkladRownanLiniowych::Kalkulator ()
  {
  
   Macierz MTemp = this->Mac;
   float Wyzn [ROZMIAR + 1];
   
   for (int i=0; i <= ROZMIAR; ++i)
    {
      Wyzn[i] = Gaus (MTemp);
      MTemp = this->Mac;
      MTemp.mtab[i] = this->Wek;
    }
    
    if (Wyzn[0] == 0)
     {
      return 0;
     }
     
     
     
    for (int j=1; j<=ROZMIAR; ++j)
     {
      this->Roz[j] = Wyzn[j] / Wyzn [0] ;
     }
     
    return 1; 
   } 
       
 
 
 void UkladRownanLiniowych::WektBlad()
 {
 
  Wektor Wtmp;
  Macierz Mtmp;
  
  Mtmp = this->Mac.Transponowanie() ;
  
  for (int i=0; i <ROZMIAR; ++i) 
   {
     Wtmp[i+1] = Mtmp.mtab[i] * this->Roz;
   }
 
  this->Blad = Wtmp - this->Wek;
  this->DlBlad = sqrt(this->Blad * this->Blad);
 
 }
 
 
 
 istream& operator >> (istream &Strm, UkladRownanLiniowych &UklRown)
 {
 Strm >> UklRown.Mac;
 Strm >> UklRown.Wek;
 }
 
 
 ostream& operator << (ostream &Strm, const UkladRownanLiniowych &UklRow)
  {
  Strm << "Macierz A^T:" << endl;
  Strm << UklRow.Mac << endl;
  Strm << endl;
  Strm << " Wektor wyrazow wolnych b: " << endl;
  Strm << UklRow.Wek << endl;
  Strm << "Rozwiązanie x = |x1 x2 x3| " << endl;
  Strm << UklRow.Roz << endl;
  Strm << "         Wektor Bladu Ax-b = " << UklRow.Blad << endl;
  Strm << "Dlugosc Wektora Bladu Ax-b = " << UklRow.DlBlad << endl;
  } 
