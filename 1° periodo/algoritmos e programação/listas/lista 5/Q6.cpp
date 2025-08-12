/*
Lista 5 - Questão 6
6. Leia M(10,10). Troque diagonal principal com secundaria; troque elementos da linha 5 com a coluna 10. Escreva matriz modificada.
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
    // trocar diagonal principal com secundaria
    for(int i=0;i<N;i++) swap(M[i][i], M[i][N-1-i]);
    // trocar linha 5 (index 4) com coluna 10 (index 9)
    int linha = 4, col = 9;
    for(int i=0;i<N;i++) swap(M[linha][i], M[i][col]);
    cout<<"Matriz modificada:\n";
    for(int i=0;i<N;i++){ for(int j=0;j<N;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
    return 0;
}
