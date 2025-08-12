/*
Lista 5 - Questão 7
7. Gere e escreva automaticamente uma matriz 6x6 com padrões como no enunciado (aninhamento de valores 1..3).
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    const int N=6;
    int M[N][N];
    for(int i=0;i<N;i++) for(int j=0;j<N;j++){
        int layer = min(min(i, j), min(N-1-i, N-1-j));
        // layer 0 -> 1, layer1->2, layer2->3
        M[i][j] = layer+1;
        if(M[i][j]>3) M[i][j]=3;
    }
    cout<<"Matriz 6x6 gerada:\n";
    for(int i=0;i<N;i++){ for(int j=0;j<N;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
    return 0;
}
