/*
Lista 6 - Questão 10
10. Pesquisa: n pessoas. Dados: nome, sexo (1-M,0-F), cor olhos, altura, peso, data nascimento. Imprimir duas listagens (mulheres e homens) sem o campo sexo.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Pessoa{ string nome; int sexo; string corOlhos; double altura; double peso; string dataNasc; };
int main(){
    int n; cout<<"Quantidade de pessoas: "; cin>>n; cin.ignore();
    vector<Pessoa> v(n);
    for(int i=0;i<n;i++){
        cout<<"Nome: "; getline(cin, v[i].nome);
        cout<<"Sexo (1-M,0-F): "; cin>>v[i].sexo; cin.ignore();
        cout<<"Cor dos olhos: "; getline(cin, v[i].corOlhos);
        cout<<"Altura: "; cin>>v[i].altura; cin.ignore();
        cout<<"Peso: "; cin>>v[i].peso; cin.ignore();
        cout<<"Data nascimento: "; getline(cin, v[i].dataNasc);
    }
    cout<<"\n--- Mulheres ---\n";
    for(auto &p: v) if(p.sexo==0) cout<<p.nome<<" | "<<p.corOlhos<<" | "<<p.altura<<" | "<<p.peso<<" | "<<p.dataNasc<<"\n";
    cout<<"\n--- Homens ---\n";
    for(auto &p: v) if(p.sexo==1) cout<<p.nome<<" | "<<p.corOlhos<<" | "<<p.altura<<" | "<<p.peso<<" | "<<p.dataNasc<<"\n";
    return 0;
}
