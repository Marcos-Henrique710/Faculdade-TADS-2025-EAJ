/*
Lista 5 - Questão 10
10. Leia A[12][12] e retorna a média aritmética dos elementos abaixo da diagonal principal.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    const int N=12;
    double A[N][N];
    cout<<"Digite 144 numeros (reais) para A[12][12]:\n";
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>A[i][j];
    double soma=0; int cnt=0;
    for(int i=1;i<N;i++) for(int j=0;j<i;j++){ soma += A[i][j]; cnt++; }
    if(cnt>0) cout<<"Media dos elementos abaixo da diagonal principal: "<< (soma/cnt) <<"\n";
    else cout<<"Sem elementos abaixo da diagonal.\n";
    return 0;
}
