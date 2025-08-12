/*
Lista 5 - Questão 15
15. Leia matriz 3x3 e gere a matriz transposta.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    const int N=3;
    int A[N][N]; cout<<"Digite 9 inteiros para matriz 3x3:\n";
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>A[i][j];
    int T[N][N];
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) T[j][i]=A[i][j];
    cout<<"Matriz transposta:\n"; for(int i=0;i<N;i++){ for(int j=0;j<N;j++) cout<<T[i][j]<<" "; cout<<"\n"; }
    return 0;
}
