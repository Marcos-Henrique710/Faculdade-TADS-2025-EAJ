/*
Lista 5 - Questão 19
19. Leia uma string e escreva-a espelhada.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string s; cout<<"Digite uma string (use getline):\n"; getline(cin,s);
    string r = s; reverse(r.begin(), r.end());
    cout<<"Espelhada: "<<r<<"\n";
    return 0;
}
