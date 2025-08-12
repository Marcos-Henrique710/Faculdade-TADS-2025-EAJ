/*
Lista 4 – Questão 30
Enunciado:
Elabore um algoritmo que leia dez conjuntos de dois valores, o primeiro representando a idade do aluno e o 
segundo representando a sua altura em metros, e armazene -os em dois vetores (Idade de Altura). Verifique 
e escreva a idade do aluno mais alto, a idad e do aluno mais baixo e a média das alturas dos alunos maiores 
de idade.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> idade(10);
    vector<double> altura(10);
    for(int i=0;i<10;i++) cin>>idade[i]>>altura[i];
    int idxMai=0, idxMen=0; for(int i=1;i<10;i++){ if(altura[i]>altura[idxMai]) idxMai=i; if(altura[i]<altura[idxMen]) idxMen=i; }
    double soma=0; int cont=0;
    for(int i=0;i<10;i++) if(idade[i]>=18){ soma+=altura[i]; cont++; }
    cout<<idade[idxMai]<<"\n"<<idade[idxMen]<<"\n";
    if(cont>0) cout<< (soma/cont) <<"\n"; else cout<<"0\n";
    return 0;
}
