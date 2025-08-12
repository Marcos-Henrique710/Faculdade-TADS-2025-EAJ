/*
6. Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas. 
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a 
tentativa. Se após três tentativas o jogador não descobrir o número, então ele perde o jogo. Faça um 
algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro 
do algoritmo e não estará visível para o usuário. 
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int numeroSecreto = 7; // número fixo para ser adivinhado
    int tentativa, i = 1;

    while (i <= 3) {
        cout << "Tentativa " << i << ": ";
        cin >> tentativa;

        if (tentativa == numeroSecreto) {
            cout << "Parabens! Voce descobriu o numero!" << endl;
            return 0;
        } else if (tentativa < numeroSecreto) {
            cout << "O numero e maior." << endl;
        } else {
            cout << "O numero e menor." << endl;
        }
        i++;
    }

    cout << "Voce perdeu! O numero era " << numeroSecreto << endl;
    return 0;
}
