/*
Lista 4 – Questão 14
Enunciado:
Elabore um algoritmo que leia um vetor de 20 posições de inteiros e verifique se ele é um palíndromo, ou 
seja, se a sua leitura em qualquer direção é a mesma. Exemplo: O vetor 1 2 3 4 5 6 6 5 4 3 2 1 é um palíndromo, 
pois se for lido de frente para trás ou  de trás para frente terá exatamente os mesmos elementos.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(12);
    for(int i=0;i<12;i++) cin>>v[i];
    vector<int> pref(12); pref[0]=v[0];
    for(int i=1;i<12;i++) pref[i]=pref[i-1]+v[i];
    for(int i=0;i<12;i++) cout<<pref[i]<<(i==11?'\n':' ');
    return 0;
}
