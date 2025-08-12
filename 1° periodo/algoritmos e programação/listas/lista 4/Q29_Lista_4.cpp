/*
Lista 4 – Questão 29
Enunciado:
Elabore um algoritmo que leia 20 números inteiros obrigatoriamente diferentes e armazene -os em um vetor. 
Cada vez que o número digitado já existir no vetor, o algoritmo deverá computar mais um erro. Ao final 
escreva o vetor e o total de erros que o usuário  cometeu.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v;
    int erros=0;
    for(int i=0;i<20;){
        int x; cin>>x;
        if(find(v.begin(), v.end(), x)==v.end()) { v.push_back(x); i++; }
        else { erros++; }
    }
    for(int i=0;i<20;i++) cout<<v[i]<<(i==19?'\n':' ');
    cout<<erros<<"\n";
    return 0;
}
