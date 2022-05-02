#include "UkladRownanLiniowych.hh"

 using namespace std;

 float UkladRownanLiniowych::Gaus (Macierz M)
  {
  
  
   for (int i=0; i <ROZMIAR+1; ++i){
    for (int j=i+1; j <ROZMIAR; ++j){
     M.mtab[j] = M.mtab[j] - M.mtab[i] * ( M(j+1,i+1) / M(i+1,i+1) );
     }
    }
    float W = 1;
     for (int k=1;  k <= ROZMIAR; ++k)
       W *= M(k,k);
       
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
  } 
