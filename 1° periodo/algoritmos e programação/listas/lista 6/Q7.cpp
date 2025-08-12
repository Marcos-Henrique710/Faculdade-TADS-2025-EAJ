/*
Lista 6 - Questão 7
7. Registro conta bancária cliente vector 15: operar cadastrar cliente, imprimir por CPF e imprimir clientes com saldo negativo.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Cliente{ string nome; string cpf; string rg; int conta; string dataAbertura; double saldo; };
int main(){
    const int N=15;
    vector<Cliente> v; v.reserve(N);
    char opc='S';
    while(opc=='S' && (int)v.size()<N){
        Cliente c; cout<<"Nome: "; getline(cin,c.nome);
        cout<<"CPF: "; getline(cin,c.cpf);
        cout<<"RG: "; getline(cin,c.rg);
        cout<<"Numero da conta: "; cin>>c.conta; cin.ignore();
        cout<<"Data abertura: "; getline(cin,c.dataAbertura);
        cout<<"Saldo: "; cin>>c.saldo; cin.ignore();
        v.push_back(c);
        cout<<"Novo (S/N)? "; cin>>opc; cin.ignore(); opc=toupper(opc);
    }
    cout<<"\nEscolha: 1-Cadastrar (ja feito), 2-Imprimir por CPF, 3-Imprimir negativos\n";
    int escolha; cin>>escolha; cin.ignore();
    if(escolha==2){
        string cpf; cout<<"Digite CPF: "; getline(cin, cpf);
        for(auto &c: v) if(c.cpf==cpf) cout<<c.nome<<" | "<<c.cpf<<" | Conta: "<<c.conta<<" | Saldo: "<<c.saldo<<"\n";
    } else if(escolha==3){
        for(auto &c:v) if(c.saldo<0) cout<<c.nome<<" | Conta: "<<c.conta<<" | Saldo: "<<c.saldo<<"\n";
    }
    return 0;
}
