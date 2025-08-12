/*
Lista 6 - Questão 12
12. Registro conta bancária com numero do banco, agencia, conta, nome, senha, saldo. Vetor 100. Ler N contas, depois menu entrar/sair. Se entrar, pedir conta e senha, permitir saque, deposito, saldo e voltar. Repete até escolher sair.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Conta{ int numBanco; int agencia; int numero; string nome; string senha; double saldo; };
int main(){
    int N; cout<<"Quantidade de contas a cadastrar (max 100): "; cin>>N; cin.ignore();
    vector<Conta> v; v.reserve(N);
    for(int i=0;i<N;i++){
        Conta c; cout<<"Banco: "; cin>>c.numBanco; cout<<" Agencia: "; cin>>c.agencia; cout<<" Numero: "; cin>>c.numero; cin.ignore();
        cout<<"Nome: "; getline(cin, c.nome);
        cout<<"Senha: "; getline(cin, c.senha);
        cout<<"Saldo: "; cin>>c.saldo; cin.ignore();
        v.push_back(c);
    }
    while(true){
        cout<<"\nTela: (E)ntrar ou (S)air: "; char op; cin>>op; cin.ignore(); op=toupper(op);
        if(op=='S') break;
        if(op=='E'){
            int num; string senha;
            cout<<"Numero da conta: "; cin>>num; cin.ignore();
            cout<<"Senha: "; getline(cin, senha);
            int idx=-1;
            for(int i=0;i<(int)v.size();i++) if(v[i].numero==num){ idx=i; break; }
            if(idx==-1 || v[idx].senha!=senha){ cout<<"Erro de busca\n"; continue; }
            int escolha=0;
            while(escolha!=4){
                cout<<"1-Saque 2-Deposito 3-Saldo 4-Voltar: "; cin>>escolha; cin.ignore();
                if(escolha==1){ double val; cout<<"Valor saque: "; cin>>val; cin.ignore(); if(val<=v[idx].saldo){ v[idx].saldo -= val; cout<<"Saque realizado\n";} else cout<<"Saldo insuficiente\n"; }
                else if(escolha==2){ double val; cout<<"Valor deposito: "; cin>>val; cin.ignore(); v[idx].saldo += val; cout<<"Deposito realizado\n"; }
                else if(escolha==3) cout<<"Saldo atual: "<<v[idx].saldo<<"\n";
            }
        }
    }
    return 0;
}
