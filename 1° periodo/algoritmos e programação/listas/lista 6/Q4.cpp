/*
Lista 6 - Questão 4
4. Cadastro max 20 clientes. Perguntar Novo Cliente (S/N). Ao terminar, mostrar relatório.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Cliente{ string identidade; string nome; string endereco; string telefone; };
int main(){
    const int MAX=20;
    vector<Cliente> v;
    char opc='S';
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
    cout<<"\nRelatorio de clientes cadastrados:\n";
    for(auto &c: v) cout<<c.identidade<<" | "<<c.nome<<" | "<<c.endereco<<" | "<<c.telefone<<"\n";
    return 0;
}
