/*
6. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor.
*/
#include <iostream>
using namespace std;

int main() {
    float custoFabrica, custoFinal;
    cout << "Custo de fabrica: "; cin >> custoFabrica;
    custoFinal = custoFabrica * (1 + 0.28 + 0.45);
    cout << "Custo final: R$ " << custoFinal;

    return 0;
}
