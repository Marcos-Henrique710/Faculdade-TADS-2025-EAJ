/*
Lista 4 – Questão 24
Enunciado:
Elabore um algoritmo que  leia um vetor B de 10 elementos  (considere que podem existir elementos 
repetidos). Em seguida mova para um vetor C apenas os elementos de B que não se repetem , deixando em B 
o elemento  -1 em cada posição substituindo o elemento que foi movido . Ao final escrev a o vetor C .
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(20); for(int i=0;i<20;i++) cin>>v[i];
    int m3=0,m5=0;
    for(int x:v){ if(x%3==0) m3++; if(x%5==0) m5++; }
    cout<<m3<<" "<<m5<<"\n";
    return 0;
}
