/*
Lista 6 - Questão 9
9. Tipo Endereco (Rua, Numero, Bairro, Cidade, Estado). Pessoas vetor 10. Leia endereco separado e liste nomes cujo bairro coincide.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Endereco{ string Rua; int Numero; string Bairro; string Cidade; string Estado; };
struct Pessoa{ string Nome; Endereco Ender; string Telefone; int Idade; };
int main(){
    const int N=10;
    vector<Pessoa> pessoas(N);
    for(int i=0;i<N;i++){
        cout<<"Nome: "; getline(cin, pessoas[i].Nome);
        cout<<"Rua: "; getline(cin, pessoas[i].Ender.Rua);
        cout<<"Numero: "; cin>>pessoas[i].Ender.Numero; cin.ignore();
        cout<<"Bairro: "; getline(cin, pessoas[i].Ender.Bairro);
        cout<<"Cidade: "; getline(cin, pessoas[i].Ender.Cidade);
        cout<<"Estado: "; getline(cin, pessoas[i].Ender.Estado);
        cout<<"Telefone: "; getline(cin, pessoas[i].Telefone);
        cout<<"Idade: "; cin>>pessoas[i].Idade; cin.ignore();
    }
    Endereco e; cout<<"\nDigite um endereco para comparacao - Bairro: "; getline(cin, e.Bairro);
    cout<<"Pessoas do mesmo bairro:\n";
    for(auto &p: pessoas) if(p.Ender.Bairro==e.Bairro) cout<<p.Nome<<"\n";
    return 0;
}
