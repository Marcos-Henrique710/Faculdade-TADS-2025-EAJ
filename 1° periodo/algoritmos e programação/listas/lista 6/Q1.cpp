/*
Lista 6 - Questão 1
1. Preencha cadastro de 10 alunos (matricula, nome, endereco, media). Some 0.5 às medias > 5. Escreva vetor final.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Aluno{
    int matricula;
    string nome;
    string endereco;
    double media;
};

int main(){
    const int N=10;
    vector<Aluno> v(N);
    for(int i=0;i<N;i++){
        cout<<"Aluno "<<i+1<<" - matricula: "; cin>>v[i].matricula; cin.ignore();
        cout<<"Nome: "; getline(cin, v[i].nome);
        cout<<"Endereco: "; getline(cin, v[i].endereco);
        cout<<"Media: "; cin>>v[i].media; cin.ignore();
    }
    for(auto &a: v) if(a.media>5.0) a.media += 0.5;
    cout<<"\nLista final de alunos:\n";
    for(auto &a: v) cout<<a.matricula<<" | "<<a.nome<<" | "<<a.endereco<<" | "<<a.media<<"\n";
    return 0;
}
