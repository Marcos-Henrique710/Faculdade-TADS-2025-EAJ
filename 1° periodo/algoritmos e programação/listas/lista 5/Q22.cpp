/*
Lista 5 - Questão 22
22. Leia uma frase e escreva-a completa e apenas as palavras em posicoes impares (1a,3a,...).
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string linha; cout<<"Digite a frase (use getline):\n"; getline(cin,linha);
    vector<string> words; string cur;
    for(size_t i=0;i<=linha.size();i++){
        if(i==linha.size() || isspace((unsigned char)linha[i])){ if(!cur.empty()){ words.push_back(cur); cur.clear(); } }
        else cur.push_back(linha[i]);
    }
    cout<<"Frase completa: "<<linha<<"\n";
    cout<<"Palavras em posicoes impares: ";
    for(size_t i=0;i<words.size();i+=2) cout<<words[i]<<( (i+2<words.size())?" ":"" );
    cout<<"\n";
    return 0;
}
