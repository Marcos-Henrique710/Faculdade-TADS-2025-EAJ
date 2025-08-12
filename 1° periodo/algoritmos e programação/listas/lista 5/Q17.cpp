/*
Lista 5 - Questão 17
17. Leia uma frase e escreva uma tabela que mostre, para cada letra, o número de vezes que aparece.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string s;
    cout<<"Digite uma frase (use getline):\n"; getline(cin, s);
    vector<int> freq(256,0);
    for(char c: s) if(isalpha((unsigned char)c)) freq[tolower(c)]++;
    for(int c='a'; c<='z'; c++) if(freq[c]>0) cout<<"\""<<(char)c<<"\" aparece "<<freq[c]<<" vez(es)\n";
    return 0;
}
