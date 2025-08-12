/*
Lista 6 - Questão 15
15. Projeto CRUD: implementar menu com incluir, buscar, alterar, excluir, listar registros. O registro deve ter chave primária inteira e regras descritas.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Registro{ int chave; string campo1; string campo2; };
int main(){
    const int MAX=100;
    vector<Registro> vet;
    int opc=0;
    while(opc!=6){
        cout<<"\n1-INCLUIR\n2-BUSCAR\n3-ALTERAR\n4-EXCLUIR\n5-LISTAR\n6-SAIR\nEscolha: "; cin>>opc; cin.ignore();
        if(opc==1){
            if((int)vet.size()>=MAX){ cout<<"Vetor cheio.\n"; continue; }
            Registro r; cout<<"Chave (int): "; cin>>r.chave; cin.ignore();
            bool exists=false; for(auto &e: vet) if(e.chave==r.chave) exists=true;
            if(exists){ cout<<"Chave ja existe.\n"; continue; }
            cout<<"Campo1: "; getline(cin,r.campo1);
            cout<<"Campo2: "; getline(cin,r.campo2);
            vet.push_back(r);
        } else if(opc==2){
            cout<<"Buscar por chave (1) ou campo1 (2)? "; int t; cin>>t; cin.ignore();
            if(t==1){ int k; cout<<"Chave: "; cin>>k; cin.ignore(); for(auto &e: vet) if(e.chave==k) cout<<e.chave<<" "<<e.campo1<<" "<<e.campo2<<"\n"; }
            else{ string s; cout<<"Campo1: "; getline(cin,s); for(auto &e: vet) if(e.campo1==s) cout<<e.chave<<" "<<e.campo1<<" "<<e.campo2<<"\n"; }
        } else if(opc==3){
            int k; cout<<"Chave do registro a alterar: "; cin>>k; cin.ignore();
            int idx=-1; for(int i=0;i<(int)vet.size();i++) if(vet[i].chave==k) idx=i;
            if(idx==-1){ cout<<"Registro nao encontrado\n"; continue; }
            cout<<"Nova chave: "; int nk; cin>>nk; cin.ignore();
            bool ok=true; for(auto &e: vet) if(e.chave==nk && nk!=k) ok=false;
            if(!ok){ cout<<"Chave nova duplicada\n"; continue; }
            vet[idx].chave = nk;
            cout<<"Novo campo1: "; getline(cin, vet[idx].campo1);
            cout<<"Novo campo2: "; getline(cin, vet[idx].campo2);
        } else if(opc==4){
            int k; cout<<"Chave a excluir: "; cin>>k; cin.ignore();
            int idx=-1; for(int i=0;i<(int)vet.size();i++) if(vet[i].chave==k){ idx=i; break; }
            if(idx==-1){ cout<<"Nao encontrado\n"; continue; }
            vet.erase(vet.begin()+idx);
            cout<<"Registro excluido\n";
        } else if(opc==5){
            for(auto &e: vet) cout<<e.chave<<" "<<e.campo1<<" "<<e.campo2<<"\n";
        }
    }
    return 0;
}
