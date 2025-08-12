/*
Lista 5 - Questão 20
20. Receba um nome completo e apresente apenas o ultimo nome e o 1o nome: 'Ultimo, Primeiro'.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string nome; cout<<"Digite o nome completo (use getline):\n"; getline(cin,nome);
    vector<string> parts; string cur;
    for(char c: nome){ if(isspace((unsigned char)c)){ if(!cur.empty()){ parts.push_back(cur); cur.clear(); } }
                        else cur.push_back(c); }
    if(!cur.empty()) parts.push_back(cur);
    if(parts.size()>=1){
        string primeiro = parts[0];
        string ultimo = parts.back();
        cout<<ultimo<<", "<<primeiro<<"\n";
    } else cout<<"Nome invalido\n";
    return 0;
}
