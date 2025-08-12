/*
Lista 5 - Questão 1
1. Leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M pelo valor A inserindo os resultados em um vetor V(36). Ao final, escreva o vetor V.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    const int R=6,C=6;
    int M[R][C];
    int A;
    cout << "Digite 36 inteiros para a matriz 6x6:\n";
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) cin >> M[i][j];
    cout << "Digite o valor A: ";
    cin >> A;
    vector<int> V; V.reserve(R*C);
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) V.push_back(M[i][j]*A);
    cout << "Vetor V (36 elementos):\n";
    for(size_t i=0;i<V.size();i++) cout << V[i] << (i+1%12==0?"\n":" ");
    cout << "\n";
    return 0;
}
