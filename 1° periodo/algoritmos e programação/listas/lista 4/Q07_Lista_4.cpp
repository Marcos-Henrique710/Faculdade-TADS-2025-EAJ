/*
Lista 4 – Questão 7
Enunciado:
Elabore um algoritmo que leia dois vetores  V1 e V2  de 10 posições cada e faça a multiplicação dos elementos 
de mesmo índice, colocando o resultado em um terceiro vetor  V3. Mostre o vetor resultante.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> V1(10), V2(10), V3(10);
    for(int i=0;i<10;i++) cin>>V1[i];
    for(int i=0;i<10;i++) cin>>V2[i];
    for(int i=0;i<10;i++) V3[i]=V1[i]*V2[i];
    for(int i=0;i<10;i++) cout<<V3[i]<<(i==9?'\n':' ');
    return 0;
}
