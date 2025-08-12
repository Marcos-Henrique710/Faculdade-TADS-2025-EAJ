/*
Lista 5 - Questão 21
21. Leia primeira string. Copie para segunda em maiusculas se a primeira letra for minuscula, ou em minusculas se a primeira letra for maiuscula.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string s1; cout<<"Digite a primeira string (use getline):\n"; getline(cin,s1);
    string s2 = s1;
    if(!s1.empty() && islower((unsigned char)s1[0])){
        for(char &c: s2) c = toupper((unsigned char)c);
    } else if(!s1.empty() && isupper((unsigned char)s1[0])){
        for(char &c: s2) c = tolower((unsigned char)c);
    }
    cout<<"Origem: "<<s1<<"\n";
    cout<<"Destino: "<<s2<<"\n";
    return 0;
}
