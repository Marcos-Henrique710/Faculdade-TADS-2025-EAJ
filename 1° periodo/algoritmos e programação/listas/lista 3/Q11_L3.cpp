/*
11. Elabore um algoritmo que leia dois números inteiros, A e B, calcule e escreva o resto da divisão de A por 
B sem usar o operador de resto (%).  
*/
#include <iostream>
using namespace std;

int main() {
    int A, B, resto;

    cout << "Digite dois numeros inteiros A e B: ";
    cin >> A >> B;

    while (A >= B) {
        A -= B;
    }

    resto = A;
    cout << "Resto da divisao de A por B: " << resto << endl;
    return 0;
}
