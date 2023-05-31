#include <iostream>

using namespace std;

class Prostokat {
private:
    double dlugosc;
    double szerokosc;
    double pole;
    double obwod;

  double obliczPole() {
    return this->dlugosc*this->szerokosc;
  }

  double obliczObwod(){
   //return this->dlugosc+this->dlugosc+this->szerokosc+this->szerokosc;
   return (2*this->dlugosc)+(2*this->szerokosc);
  }
public:

  void wyswietlDane(){
    cout << "szerokosc prostokata jest rowna: " << this->szerokosc << endl;
    cout << "dlugosc prostokata jest rowna: " << this->dlugosc << endl;
    cout << "Pole prostokata jest rowne: "<< this->pole << endl;
    cout << "Obwod prostokata jest rowny: "<< this->obwod << endl;
  }
    Prostokat (double szerokosc, double dlugosc){
        this->dlugosc=dlugosc;
        this->szerokosc=szerokosc;
        this->pole=obliczPole();
        this->obwod=obliczObwod();
  }
};

int main(){
    Prostokat ab(10,20);
    ab.wyswietlDane();
    Prostokat cd(2,3);
    cd.wyswietlDane();
}
