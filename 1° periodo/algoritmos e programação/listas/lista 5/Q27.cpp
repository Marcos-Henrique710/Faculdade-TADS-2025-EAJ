/*
Lista 5 - Questão 27
27. Leia string (max 40) inverta e armazene em outra variavel e mostre.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string s; cout<<"Digite uma string (max 40, use getline):\n"; getline(cin,s);
    if(s.size()>40) s = s.substr(0,40);
    string r = s; reverse(r.begin(), r.end());
    cout<<"Invertida: "<<r<<"\n";
    return 0;
}
