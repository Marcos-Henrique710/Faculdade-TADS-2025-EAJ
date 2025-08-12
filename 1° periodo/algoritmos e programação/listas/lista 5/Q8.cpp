/*
Lista 5 - Questão 8
8. Elemento minimax: menor elemento da linha onde se encontra o maior elemento da matriz 10x10.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    const int N=10;
    int M[N][N];
    cout<<"Digite 100 inteiros para M[10][10]:\n";
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>M[i][j];
    int maior = M[0][0]; int li=0, lj=0;
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) if(M[i][j]>maior){ maior=M[i][j]; li=i; lj=j; }
    int minimax = M[li][0]; int posj=0;
    for(int j=1;j<N;j++) if(M[li][j]<minimax){ minimax=M[li][j]; posj=j; }
    cout<<"Maior elemento: "<<maior<<" na posicao ("<<li<<","<<lj<<")\n";
    cout<<"Elemento minimax (menor na linha do maior): "<<minimax<<" na posicao ("<<li<<","<<posj<<")\n";
    return 0;
}
