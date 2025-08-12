/*
8. Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter.
*/
#include <iostream>
using namespace std;

int main() {
    float cotacao, dolares, reais;
    cout << "Cotacao: "; cin >> cotacao;
    cout << "Dolares: "; cin >> dolares;
    reais = cotacao * dolares;
    cout << "Reais: R$ " << reais;

    return 0;
}
