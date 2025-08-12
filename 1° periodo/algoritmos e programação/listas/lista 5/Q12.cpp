/*
Lista 5 - Questão 12
12. Leia matriz MxN, escreva o maior elemento da linha que contém o menor elemento da matriz.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    int M,N; cout<<"Digite M e N: "; cin>>M>>N;
    vector<vector<int>> A(M, vector<int>(N));
    for(int i=0;i<M;i++) for(int j=0;j<N;j++) cin>>A[i][j];
    int menor=A[0][0]; int linhaMenor=0;
    for(int i=0;i<M;i++) for(int j=0;j<N;j++) if(A[i][j]<menor){ menor=A[i][j]; linhaMenor=i; }
    int maiorLinha=A[linhaMenor][0];
    for(int j=1;j<N;j++) if(A[linhaMenor][j]>maiorLinha) maiorLinha=A[linhaMenor][j];
    cout<<"Menor elemento: "<<menor<<" na linha "<<linhaMenor<<". Maior nessa linha: "<<maiorLinha<<"\n";
    return 0;
}
