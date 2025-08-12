/*
Lista 4 – Questão 4
Enunciado:
Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois 
elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos 
elementos.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(20);
    for(int i=0;i<20;i++) cin>>v[i];
    int maior=v[0], menor=v[0];
    long long soma=0;
    for(int x:v){ if(x>maior) maior=x; if(x<menor) menor=x; soma+=x; }
    cout<<maior<<" "<<menor<<" "<< (double)soma/20.0 <<"\n";
    return 0;
}
