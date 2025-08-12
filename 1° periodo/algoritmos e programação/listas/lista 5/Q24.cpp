/*
Lista 5 - Questão 24
24. Implementar Código de César com deslocamento n informado pelo usuário. Entrada string; saída string codificada.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    int n; string s;
    cout<<"Digite o deslocamento n: "; cin>>n; cin.ignore();
    cout<<"Digite a frase (use getline):\n"; getline(cin,s);
    string out = s;
    for(size_t i=0;i<s.size();i++){
        char c = s[i];
        if(isalpha((unsigned char)c)){
            char base = isupper((unsigned char)c)? 'A':'a';
            out[i] = char( ( (c - base) + n + 26 ) % 26 + base );
        } else out[i]=toupper((unsigned char)c); // exemplo do enunciado mostra maiusculas; adotamos manter e converter para maiusculas
    }
    cout<<"Codificado: "<<out<<"\n";
    return 0;
}
