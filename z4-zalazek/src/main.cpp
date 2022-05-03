#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"



using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */


int main()
{
  UkladRownanLiniowych   UklRown;   // To tylko przykladowe definicje zmiennej
/***  Wektor W1(9,6,3);
  Wektor W2(2,0,1);
  Wektor W3;
  Macierz M1;
  
  cout << endl << " Start programu " << endl << endl;
  cout << W1 <<endl;
  cout << W2 <<endl;
  cout << W3 <<endl;
***/
  
/*  cout << " W1 = W1 * W2[1] " << endl;
  W1 = W1 * W2[1];
  cout << W1 <<endl;
  cout << W2 <<endl;
  
  cout << " W1 = W1 / W2[1] " << endl;
  W1 = W1 / W2[1];
  cout << W1 <<endl;
  cout << W2 <<endl;
  
  cout << " W1 = W1 + W2 " << endl;
  W1 = W1 + W2;
  cout << W1 <<endl;
  cout << W2 <<endl;
  
  cout << " W1 = W1 - W2" << endl;
  W1 = W1 - W2;
  cout << W1 <<endl;
  cout << W2 <<endl;*/
  
/***  cout << M1 << endl;
  
  cin >> M1 ; 
  
  cout << M1(2,2) <<endl;
  
  cin >> M1(3,1) ;  
  
  cout << M1 << endl; ***/
  
  cin >> UklRown;
 if (UklRown.Kalkulator() == 0)
 {
  cout << "Rownanie sprzeczne lub nieoznaczone" <<endl;
  return 1;
 }
  UklRown.WektBlad();
  cout << UklRown;
  return 0;
 }

