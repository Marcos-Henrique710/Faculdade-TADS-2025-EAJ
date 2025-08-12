/*
Lista 5 - Questão 5
5. Leia M(12,13) e multiplique todos os 13 elementos de cada linha pelo maior elemento daquela linha.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    const int R=12,C=13;
    int M[R][C];
    cout<<"Digite 156 inteiros para M[12][13]:\n";
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) cin>>M[i][j];
    cout<<"Matriz original:\n"; for(int i=0;i<R;i++){ for(int j=0;j<C;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
    for(int i=0;i<R;i++){
        int maior = M[i][0];
        for(int j=1;j<C;j++) if(M[i][j]>maior) maior=M[i][j];
        for(int j=0;j<C;j++) M[i][j] *= maior;
    }
    cout<<"Matriz modificada:\n"; for(int i=0;i<R;i++){ for(int j=0;j<C;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
    return 0;
}
