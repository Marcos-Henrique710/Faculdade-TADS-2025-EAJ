/*
Lista 6 - Questão 3
3. Cadastrar dois clientes (identidade, nome, endereco, telefone) usando struct.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Cliente{ string identidade; string nome; string endereco; string telefone; };
int main(){
    vector<Cliente> v(2);
    for(int i=0;i<2;i++){
        cout<<"Cliente "<<i+1<<" identidade: "; getline(cin, v[i].identidade);
        cout<<"Nome: "; getline(cin, v[i].nome);
        cout<<"Endereco: "; getline(cin, v[i].endereco);
        cout<<"Telefone: "; getline(cin, v[i].telefone);
    }
    cout<<"\nRelatorio de clientes:\n";
    for(auto &c: v) cout<<c.identidade<<" | "<<c.nome<<" | "<<c.endereco<<" | "<<c.telefone<<"\n";
    return 0;
}
