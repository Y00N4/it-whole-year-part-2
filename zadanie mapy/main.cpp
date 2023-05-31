#include <bits/stdc++.h>
//slowo, zdanie string ma policzyc ile razy wystrepuje kazda z liter

using namespace std;

int main()
{   string slowo="kott";
    map<char,int>charMap;
    for(char litera : slowo){
        if(charMap.find(litera) != charMap.end()) {
            charMap[litera]++;
        }
        else {
            charMap.insert({litera,1});
        }
    }
    for (auto element : charMap){
        cout<< element.first  << " " << element.second << endl;

    }

    return 0;
}
