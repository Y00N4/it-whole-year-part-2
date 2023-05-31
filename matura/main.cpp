#include <bits/stdc++.h>
//Oblicz, ile razy nast¹pi³a sytuacja, w której rozgrywkê wygra³a inna dru¿yna ni¿ rozgrywkê
//poprzedni¹ (tzn. dwa kolejne znaki A lub B w opisie meczu siê ró¿ni¹).


//Pierwszy set w meczu trwa do pierwszej rozgrywki, po której któraœ z dru¿yn ma co najmniej
//1000 punktów za wygranie dotychczasowych rozgrywek, natomiast dru¿yna przeciwna ma
//co najmniej 3 punkty mniej. Dru¿yna, która zdobywa w secie wiêcej punktów od przeciwnej,
//wygrywa pierwszego seta.
using namespace std;

int main()
{
    ifstream file("mecz.txt");
    string line;
    string winner;
    int zmiana=0;
    int sumaA=0;
    int sumaB=0;
    int wynikA=0;
    int wynikB=0;

 //   while(getline(file, line)){
     //   cout << stoi(line) - 1  << endl;
   // }
   getline(file, line);
   for(int i = 0; i < line.length(); i++){
    line[i];
   }


  for (int i=1;i<line.length();i++){
    if (line[i]!=line[i-1]){
            zmiana++;
    }
  }

  for (int i=0;i<line.length();i++){
    if (line[i]=='A'){
        sumaA++;
    } else {
        sumaB++;
    }
    if (sumaA >= 1000 && sumaA - sumaB >= 3){
        winner = "A";
        break;
    } else if(sumaB >= 1000 && sumaB - sumaA >= 3){
        winner = "B";
        break;
    }
  }
  for (int i=0; i< line.length();i++){
    if (line[i]=='A') {
    wynikA++;
    }
    else {
        wynikB++;
    }
  }

  cout << wynikA<< endl;
  cout << sumaA << endl;
  cout << sumaB << endl;
  cout << winner << endl;
  cout << zmiana;

    return 0;

}

//
