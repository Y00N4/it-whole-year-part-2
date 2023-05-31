#include <iostream>
// klasa prostokat niech wyliczy sie obw, pole.

using namespace std;

class Prostokat {
public:
    float bokA;
    float bokB;

  float liczeniePola() {
  return this->pole=this->bokA*this->bokB;

  }

  float liczenieObwodu(){
  return this->obwod=(this->bokA*2)+(this->bokB*2);

  }
  void wyswietlanie(){
  cout << "Pole prostokata jest rowne " << this->pole;
  cout << "obwod prostokata jest rowne" << this->obwod;
  }
private:
    float pole;
    float obwod;


};
 class Trojkat {
  private:
  int pole;
  int obwod;
  public:
  int bokA;
  int bokB;
  int bokC;
  int H;

  int wyliczaniepolatrojkata(){
  return ((this->bokA *this->H)/2);
  }
  int wyliczaniebwodutrojakta(){
      cout << bokA<<endl;
      cout << bokB<<endl;
      cout << bokC<<endl;
      cout << H<< endl;
  return this->bokA+this->bokB+this->bokC;
  }

  void wyswietlanieinftrojkat(){
  cout << "pole trojkata jest rowne: " << this->pole << endl;
  cout << "obwod trojkata jest rowny: " << this->obwod <<endl;
  }
  Trojkat(int bokA, int bokB,int bokC, int H){
      this->bokA= bokA;
      this->bokB=bokB;
      this->bokC=bokC;
      this->H=H;
      this->obwod = wyliczaniebwodutrojakta();
      this->pole = wyliczaniepolatrojkata();
  }

 };


int main()
{
    //Prostokat wyliczanie;
   // cout << "Podaj bok A: \n";
   // cin >> wyliczanie.bokA;
   // cout << "podaj bok B: \n";
    //cin >> wyliczanie.bokB;

   // cout << endl <<  endl;

   // wyliczanie.wyswietlanie();
   Trojkat abc(4,4,8,4);
   abc.wyswietlanieinftrojkat();

    Trojkat xyz(5,3,7,2);
    xyz.wyswietlanieinftrojkat();
    return 0;
}
