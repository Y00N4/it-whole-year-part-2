//#include<map>
//#include<vector>
//#include <iostream>
//#include <fstream>
//#include <string>
#include<bits/stdc++.h>
using namespace std;

int main()
{   fstream plik("instrukcja.txt");
    string line;

    if (plik.is_open()) {
        while (getline(plik, line)) {
                if(line[0]=='D'){
                        if (charMap.find(line[7]) != charMap.end()) {
                             charMap[line[7]]++;
                        }
                 else {
                   charMap.insert({line[7], 1});
                            }
        }

    } else {
    cout << "Nie znaleziono pliku" << endl;
    }
   plik.close();
   int maxCounter=0;
   char maxChar= '0';

    for(auto element : charMap){
        if(element.second > maxCounter){
            maxCounter= element.second;
            maxChar= element.first;

        }
        cout << element.first
    }
    cout<< maxChar << " "<< maxCounter;

  return 0;
}
