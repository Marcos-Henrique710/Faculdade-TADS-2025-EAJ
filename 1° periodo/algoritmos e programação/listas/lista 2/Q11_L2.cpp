/*
11. Elabore um algoritmo que leia um n�mero inteiro maior do que zero (m�ximo de 5 algarismos), verifique 
e escreva a soma de todos os seus algarismos. Por exemplo, para o n�mero 251 a soma ser� 8 (2 + 5 + 
1). Se o n�mero lido n�o for maior do que zero, o programa terminar com a mensagem �N�mero 
inv�lido�.  
*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um n�mero inteiro maior que zero (m�ximo 5 algarismos): ";
    cin >> numero;

    if (numero <= 0 || numero > 99999) {
        cout << "N�mero inv�lido." << endl;
        return 1;
    }

    int soma = 0;

    if (numero <= 9) {
        soma = numero;
    } else if (numero <= 99) {
        soma = (numero / 10) + (numero % 10);
    } else if (numero <= 999) {
        soma = (numero / 100) + ((numero / 10) % 10) + (numero % 10);
    } else if (numero <= 9999) {
        soma = (numero / 1000) + ((numero / 100) % 10) + ((numero / 10) % 10) + (numero % 10);
    } else {
        soma = (numero / 10000) + ((numero / 1000) % 10) + ((numero / 100) % 10) + ((numero / 10) % 10) + (numero % 10);
    }

    cout << "A soma dos algarismos de " << numero << " �: " << soma << endl;

    return 0;
}

