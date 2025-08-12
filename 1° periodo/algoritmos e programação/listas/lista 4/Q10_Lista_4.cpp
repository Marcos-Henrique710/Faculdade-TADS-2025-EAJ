/*
Lista 4 – Questão 10
Enunciado:
Sejam A e B dois vetores contendo 10 elementos inteiros.  Elabore um algoritmo que:  
a. Leia A e B.   
b. Calcule a soma dos elementos de A.  


c. Crie o vetor C contendo a soma dos elementos de mesma posição dos vetores A e B.   
d. Calcule quantos elementos de A são maiores que a soma dos elementos de B.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> A(10), B(10), C(10);
    for(int i=0;i<10;i++) cin>>A[i];
    for(int i=0;i<10;i++) cin>>B[i];
    int somaA = accumulate(A.begin(), A.end(), 0);
    for(int i=0;i<10;i++) C[i]=A[i]+B[i];
    int count=0;
    for(int i=0;i<10;i++) if(A[i] > B[i]) count++;
    cout<<somaA<<"\n";
    for(int i=0;i<10;i++) cout<<C[i]<<(i==9?'\n':' ');
    cout<<count<<"\n";
    return 0;
}
