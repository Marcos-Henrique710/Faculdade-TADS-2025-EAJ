/*
Lista 6 - Questão 8
8. Provedor: cadastro (codigo, email, horas, pagina S/N). Calcular valor a pagar: primeiras 20h = 35, horas excedentes 2.5/h, se tiver pagina adicionar 40. Max 500 registros.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Cliente{ int codigo; string email; int horas; char pagina; };
int main(){
    const int MAX=500;
    vector<Cliente> v; char opc='S';
    while(opc=='S' && (int)v.size()<MAX){
        Cliente c; cout<<"Codigo: "; cin>>c.codigo; cin.ignore();
        cout<<"Email: "; getline(cin,c.email);
        cout<<"Horas de acesso: "; cin>>c.horas; cin.ignore();
        cout<<"Possui pagina (S/N): "; cin>>c.pagina; cin.ignore(); c.pagina=toupper(c.pagina);
        v.push_back(c);
        cout<<"Novo (S/N)? "; cin>>opc; cin.ignore(); opc=toupper(opc);
    }
    cout<<"\nRelatorio de valores a pagar:\n";
    for(auto &c: v){
        double valor = 0;
        if(c.horas<=20) valor = 35.0;
        else valor = 35.0 + (c.horas-20)*2.5;
        if(c.pagina=='S') valor += 40.0;
        cout<<c.codigo<<" | "<<c.email<<" | Horas: "<<c.horas<<" | A pagar: "<<valor<<"\n";
    }
    return 0;
}
