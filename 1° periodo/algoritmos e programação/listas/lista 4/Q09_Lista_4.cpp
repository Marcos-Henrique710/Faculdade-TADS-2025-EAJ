/*
Lista 4 – Questão 9
Enunciado:
Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos 
elementos pares de A. Exemplo: Se A = [1  3  6  7  8], seus elementos pares estão nos índices 2 e 4 . Assim, P  
=  [2  4].
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> A(10);
    for(int i=0;i<10;i++) cin>>A[i];
    vector<int> P;
    for(int i=0;i<10;i++) if(A[i]%2==0) P.push_back(i);
    for(size_t i=0;i<P.size();i++) cout<<P[i]<<(i+1==P.size()?"\n":" ");
    return 0;
}
