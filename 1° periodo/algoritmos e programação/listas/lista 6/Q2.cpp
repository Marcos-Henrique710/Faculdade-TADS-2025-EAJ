/*
Lista 6 - Questão 2
2. Defina tAnimal (nome, raca, idade). Cadastre 8 animais. Escreva nome do mais velho. Permita busca por raca.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct tAnimal{
    string nome;
    string raca;
    int idade;
};

int main(){
    vector<tAnimal> animais(8);
    for(int i=0;i<8;i++){
        cout<<"Animal "<<i+1<<" nome: "; getline(cin, animais[i].nome);
        cout<<"Raca: "; getline(cin, animais[i].raca);
        cout<<"Idade: "; cin>>animais[i].idade; cin.ignore();
    }
    int idxMaisVelho=0;
    for(int i=1;i<8;i++) if(animais[i].idade > animais[idxMaisVelho].idade) idxMaisVelho=i;
    cout<<"Animal mais velho: "<<animais[idxMaisVelho].nome<<" ("<<animais[idxMaisVelho].idade<<" anos)\n";
    char opc;
    cout<<"Deseja consultar por raca? (S/N): "; cin>>opc; cin.ignore();
    if(toupper(opc)=='S'){
        string r; cout<<"Digite a raca: "; getline(cin,r);
        bool found=false;
        for(auto &a: animais) if(a.raca==r){ cout<<a.nome<<" - "<<a.idade<<" anos\n"; found=true; }
        if(!found) cout<<"Nenhum animal da raca informada.\n";
    }
    return 0;
}
