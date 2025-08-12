/*
Lista 4 – Questão 28
Enunciado:
Elabore um algoritmo que solicite ao usuário que digite dez números inteiros aleatórios. Para cada número 
digitado, insira -o em um vetor V ordenado em ordem decrescente. Ao final escreva o vetor V.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> V;
    for(int i=0;i<10;i++){
        int x; cin>>x;
        auto it = lower_bound(V.begin(), V.end(), x, greater<int>());
        V.insert(it, x);
    }
    for(int i=0;i< (int)V.size(); i++) cout<<V[i]<<(i+1==V.size()?"\n":" ");
    return 0;
}
