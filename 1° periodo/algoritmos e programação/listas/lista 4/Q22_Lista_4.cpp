/*
Lista 4 – Questão 22
Enunciado:
Elabore um algoritmo que leia um vetor X de até 10 elementos. A leitura deverá ser executada até que o vetor 
fique totalmente preenchido ou seja informado um valor negativo ou zero. Em seguida leia 2 valores de 
índices representa ndo um intervalo fechado no vetor (índice inicial e índice final ). Finalmente o algoritmo 
deverá escrever todos os elementos do vetor naquele  intervalo, o maior elemento, o menor elemento e a 
média dos elementos .
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(10); for(int i=0;i<10;i++) cin>>v[i];
    int pos; cin>>pos;
    if(pos<0||pos>=10){ cout<<"Posicao invalida\n"; return 0; }
    for(int i=pos;i<9;i++) v[i]=v[i+1];
    for(int i=0;i<9;i++) cout<<v[i]<<(i==8?'\n':' ');
    return 0;
}
