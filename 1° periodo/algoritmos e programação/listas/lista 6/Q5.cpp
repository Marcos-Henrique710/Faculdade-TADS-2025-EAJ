/*
Lista 6 - Questão 5
5. Ao finalizar cadastros (max 20), limpar tela e perguntar ver relatorio ou consultar por identidade.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Cliente{ string identidade; string nome; string endereco; string telefone; };
int main(){
    const int MAX=20;
    vector<Cliente> v; char opc='S';
    while(opc=='S' && (int)v.size()<MAX){
        Cliente c;
        cout<<"Identidade: "; getline(cin, c.identidade);
        cout<<"Nome: "; getline(cin, c.nome);
        cout<<"Endereco: "; getline(cin, c.endereco);
        cout<<"Telefone: "; getline(cin, c.telefone);
        v.push_back(c);
        if((int)v.size()==MAX) break;
        cout<<"Novo Cliente (S/N)? "; cin>>opc; cin.ignore(); opc = toupper(opc);
    }
    // simulando limpar tela com varias quebras de linha
    for(int i=0;i<30;i++) cout<<"\n";
    cout<<"Deseja (R)elatorio ou (C)onsultar cliente? "; char op; cin>>op; cin.ignore(); op=toupper(op);
    if(op=='R'){
        for(auto &c: v) cout<<c.identidade<<" | "<<c.nome<<" | "<<c.endereco<<" | "<<c.telefone<<"\n";
    } else if(op=='C'){
        string id; cout<<"Digite a identidade para busca: "; getline(cin,id);
        bool found=false;
        for(auto &c: v) if(c.identidade==id){ cout<<c.identidade<<" | "<<c.nome<<" | "<<c.endereco<<" | "<<c.telefone<<"\n"; found=true; }
        if(!found) cout<<"Cliente nao cadastrado.\n";
    }
    return 0;
}
