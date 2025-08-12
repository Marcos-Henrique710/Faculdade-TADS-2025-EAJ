/*
Lista 5 - Questão 2
2. Leia inteiro A e matriz M(30,30). Conte quantos valores da matriz M são iguais a A. Crie matriz X contendo todos os elementos de M diferentes de A (quando for igual a A, insira 0).
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    const int R=30,C=30;
    int M[R][C], X[R][C];
    int A;
    cout << "Digite o valor A: "; cin >> A;
    cout << "Digite 900 inteiros para a matriz 30x30:\n";
    int count=0;
    for(int i=0;i<R;i++) for(int j=0;j<C;j++){
        cin >> M[i][j];
        if(M[i][j]==A){ count++; X[i][j]=0; } else X[i][j]=M[i][j];
    }
    cout << "Quantidade de elementos iguais a A: "<<count<<"\n";
    cout << "Matriz X:\n";
    for(int i=0;i<R;i++){ for(int j=0;j<C;j++) cout<<X[i][j]<<" "; cout<<"\n"; }
    return 0;
}
