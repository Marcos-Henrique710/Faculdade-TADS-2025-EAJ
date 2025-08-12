/*
Lista 5 - Questão 14
14. Leia matriz 4x5 de reais. Calcule soma dos elementos de cada coluna e armazene em vetor de 5 elementos.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    const int R=4,C=5;
    double M[R][C]; cout<<"Digite 20 numeros reais para matriz 4x5:\n";
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) cin>>M[i][j];
    double soma[C]; for(int j=0;j<C;j++) soma[j]=0;
    for(int j=0;j<C;j++) for(int i=0;i<R;i++) soma[j]+=M[i][j];
    cout<<"Matriz:\n"; for(int i=0;i<R;i++){ for(int j=0;j<C;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
    cout<<"Vetor soma por coluna:\n"; for(int j=0;j<C;j++) cout<<soma[j]<<" "; cout<<"\n";
    return 0;
}
