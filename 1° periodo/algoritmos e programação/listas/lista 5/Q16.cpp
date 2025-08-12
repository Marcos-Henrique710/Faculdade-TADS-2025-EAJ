/*
Lista 5 - Questão 16
16. Leia uma frase em uma string e uma palavra em outra string, verifique e escreva se a palavra está contida na frase.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string frase, palavra;
    cout<<"Digite a frase (use getline):\n"; getline(cin, frase);
    cout<<"Digite a palavra: "; getline(cin, palavra);
    if(frase.find(palavra) != string::npos) cout<<"a palavra \""<<palavra<<"\" esta contida na frase\n";
    else cout<<"a palavra nao esta contida na frase\n";
    return 0;
}
