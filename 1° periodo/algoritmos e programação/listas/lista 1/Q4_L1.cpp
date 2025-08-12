/*
4. Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual aplicado ao número.
*/
#include <iostream>
using namespace std;

int main() {
    float numero, percentual, resultado;
    cout << "Numero: "; cin >> numero;
    cout << "Percentual: "; cin >> percentual;
    resultado = numero * (percentual / 100);
    cout << "Resultado: " << resultado;

    return 0;
}
