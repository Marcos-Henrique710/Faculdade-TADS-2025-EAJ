/*
2. Leia um n�mero, verifique e escreva se este n�mero � par ou �mpar. Se for par, verifique e escreva se � 
maior que 100 ou n�o e se for �mpar verifique e escreva se � positivo ou negativo. 
*/

#include <iostream>
using namespace std;

int main() {
    float num;

    cout << "\n\tDigite um numero: ";
    cin >> num;

    if ((int)num % 2 == 0) {
        cout << "\n\tNumero e par";
        if (num > 100) {
            cout << " e maior que 100";
        } else {
            cout << " e menor que 100";
        }
    } else {
        cout << "\n\tNumero e impar";

        if (num > 0) {
            cout << "\n\tNumero positivo";
        } else {
            cout << "\n\tNumero negativo";
        }
    }

    return 0;
}

