#include <iostream>
#include <map>
#include <string>


using namespace std;

int main(){
    map < int, int> candles;
   int tab[6]= { 3,4,1,2,3,4};
   int wiek=0;
   //cout << tab[2];
   for (int i=0; i < 6; i++){
    if (candles.find(tab[i]) != candles.end()){
        //znaleziono
        candles[tab[i]]++; // odwolanie do wartosci
    } else {
        //nie
        candles.insert({tab[i], 1 });
    }
    wiek++;
   }
   cout << wiek; //a

    for (auto element: candles) { // b
      cout << element.first << " " << element.second << endl;
    }
     // Najwyzsza wartosci i ile razy wystepuje

    int lbmax=0;
    int wyswietlenie=0;

    for (int i=0; i < 6; i++){
    if (tab[i] > lbmax) {
        lbmax=tab[i];
    }
    }

    for (auto element: candles ) {
        if (element.first == lbmax){
            wyswietlenie += element.second;
        }
    }
    //cout << lbmax <<  " " << wyswietlenie;

    cout << lbmax <<  " " << candles[lbmax]

   // d) jaka jest ró¿nica pomiêdzy kolejnymi wartoœciami

 }
