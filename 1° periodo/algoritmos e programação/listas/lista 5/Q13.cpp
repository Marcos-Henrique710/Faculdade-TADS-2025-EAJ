/*
Lista 5 - Questão 13
13. Leia positivos para matriz 3x3 tal que pares em linhas pares e impares em linhas impares. Quando não houver espaço, avisar e continuar até preencher.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    const int N=3;
    int M[N][N]; for(int i=0;i<N;i++) for(int j=0;j<N;j++) M[i][j]=0;
    int filled=0;
    cout<<"Digite numeros inteiros positivos ate preencher a matriz 3x3\n";
    while(filled < N*N){
        int x; cin>>x;
        if(x<=0){ cout<<"Apenas positivos.\n"; continue; }
        bool isPar = (x%2==0);
        // linhas pares = indices 0 and 2? Considerando 1-based, linhas pares: 2; but commonly in pt-br 'linhas pares' = índices pares 0,2? 
        // Aqui vamos considerar linhas 0 and 2 como pares (0-based even indices).
        bool colocado=false;
        for(int i=0;i<N;i++){
            if(((i%2==0) && isPar) || ((i%2==1) && !isPar)){
                for(int j=0;j<N;j++) if(M[i][j]==0){ M[i][j]=x; filled++; colocado=true; break; }
            }
            if(colocado) break;
        }
        if(!colocado) cout<<"Nao ha espaco para esse numero no padrao exigido. Continue...\n";
    }
    cout<<"Matriz final:\n"; for(int i=0;i<N;i++){ for(int j=0;j<N;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
    return 0;
}
