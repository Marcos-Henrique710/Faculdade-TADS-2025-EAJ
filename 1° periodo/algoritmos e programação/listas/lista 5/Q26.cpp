/*
Lista 5 - Questão 26
26. Leia string e escreva sem vogais.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool isVowel(char c){ c=tolower((unsigned char)c); return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'; }
int main(){
    string s; cout<<"Digite a string (use getline):\n"; getline(cin,s);
    string out=""; for(char c: s) if(!isVowel(c)) out.push_back(c);
    cout<<"Sem vogais: "<<out<<"\n";
    return 0;
}
