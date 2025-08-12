/*
Lista 4 – Questão 11
Enunciado:
Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os 
elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos 
pares e impares.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(20);
    for(int i=0;i<20;i++) cin>>v[i];
    int maxdiff = abs(v[1]-v[0]); int idx=0;
    for(int i=1;i<20;i++){
        int d = abs(v[i]-v[i-1]); if(d>maxdiff){ maxdiff=d; idx=i-1; }
    }
    cout<<maxdiff<<" "<<idx<<" "<<idx+1<<"\n";
    return 0;
}
