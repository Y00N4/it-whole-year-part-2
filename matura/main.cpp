#include <bits/stdc++.h>
//Oblicz, ile razy nast�pi�a sytuacja, w kt�rej rozgrywk� wygra�a inna dru�yna ni� rozgrywk�
//poprzedni� (tzn. dwa kolejne znaki A lub B w opisie meczu si� r�ni�).


//Pierwszy set w meczu trwa do pierwszej rozgrywki, po kt�rej kt�ra� z dru�yn ma co najmniej
//1000 punkt�w za wygranie dotychczasowych rozgrywek, natomiast dru�yna przeciwna ma
//co najmniej 3 punkty mniej. Dru�yna, kt�ra zdobywa w secie wi�cej punkt�w od przeciwnej,
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
