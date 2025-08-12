-/*1. Elabore um algoritmo que leia o código (inteiro) e a idade de 100 pessoas e escreva ao final o código da
pessoa mais velha e a idade da pessoa mais nova. 
*/
#include <iostream>
using namespace std;

int main() {
    int cod, idade;
    int pessoaMaisVelha = -1, codMaisVelha = -1;
    int pessoaMaisNova = 200, codMaisNova = -1;

    for (int i = 1; i <= 100; i++) {
        do {
            cout << "\nPessoa " << i << ":\n";
            cout << "\tIdade: ";
            cin >> idade;
            cout << "\tCodigo: ";
            cin >> cod;

            if (idade < 0 || idade > 120 || cod < 0)
                cout << "\tDados invalidos! Tente novamente.\n";

        } while (idade < 0 || idade > 120 || cod < 0);

        // Verifica mais velha
        if (idade > pessoaMaisVelha) {
            pessoaMaisVelha = idade;
            codMaisVelha = cod;
        }

        // Verifica mais nova
        if (idade < pessoaMaisNova) {
            pessoaMaisNova = idade;
            codMaisNova = cod;
        }
    }

    cout << "\nA pessoa mais velha tem " << pessoaMaisVelha << " anos e codigo " << codMaisVelha << ".";
    cout << "\nA pessoa mais nova tem " << pessoaMaisNova << " anos e codigo " << codMaisNova << ".\n";

    return 0;
}


