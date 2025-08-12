/*
12. Leia dois números inteiros quaisquer e escreva a soma entre os três sucessores do primeiro e os dois antecessores do segundo.
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, soma;
    cout << "Primeiro numero: "; cin >> a;
    cout << "Segundo numero: "; cin >> b;
    soma = (a+1)+(a+2)+(a+3)+(b-1)+(b-2);
    cout << "Soma: " << soma;

    return 0;
}
