/*
Lista 4 – Questão 16
Enunciado:
Elabore um algoritmo que leia um vetor S contendo os salários dos funcionários de uma empresa com, no 
máximo, 100 funcionários, sendo que para terminar a entrada será fornecido o valor -1. Após toda a entrada 
ter sido realizada, leia o valor de um reajuste . Em seguida, gere e escreva um segundo vetor R contendo todos 
os salários de S já reajustados.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(10);
    for(int i=0;i<10;i++) cin>>v[i];
    int mx = *max_element(v.begin(), v.end());
    int second = INT_MIN;
    for(int x:v) if(x!=mx && x>second) second=x;
    if(second==INT_MIN) cout<<"Nao existe segundo maior\n"; else cout<<second<<"\n";
    return 0;
}
