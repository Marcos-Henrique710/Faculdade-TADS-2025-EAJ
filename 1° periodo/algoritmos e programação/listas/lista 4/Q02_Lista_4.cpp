/*
Lista 4 – Questão 2
Enunciado:
Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores 
pares existem no vetor e troque cada um desses elementos por 0.  Em seguida escreva o vetor final.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(20);
    for(int i=0;i<20;i++) cin>>v[i];
    int count=0;
    for(int i=0;i<20;i++) if(v[i]%2==0){ count++; v[i]=0; }
    for(int i=0;i<20;i++) cout<<v[i]<<(i==19?'\n':' ');
    return 0;
}
