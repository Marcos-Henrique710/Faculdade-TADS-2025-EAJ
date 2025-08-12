/*
Lista 4 – Questão 17
Enunciado:
Elabore um algoritmo que leia um vetor ORIGINAL de 20 posições de inteiro, verifique e informe se os seus 
elementos estão em ordem crescente, ordem decrescente ou ordem aleatória.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> A(10), B(10);
    for(int i=0;i<10;i++) cin>>A[i];
    for(int i=0;i<10;i++) cin>>B[i];
    vector<int> C = A; C.insert(C.end(), B.begin(), B.end());
    for(int i=0;i<20;i++) cout<<C[i]<<(i==19?'\n':' ');
    return 0;
}
