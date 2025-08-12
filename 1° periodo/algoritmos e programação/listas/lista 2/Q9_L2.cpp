/*
9. Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e 
escreva-os na ordem solicitada.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    char ordem;

    cout << "Digite três números inteiros:\n";
    cin >> a >> b >> c;

    cout << "Digite 'c' para ordem crescente ou 'd' para ordem decrescente:\n";
    cin >> ordem;

    int primeiro, segundo, terceiro;

    if (ordem == 'c') {
        // Crescente
        if (a <= b && a <= c) {
            primeiro = a;
            if (b <= c) {
                segundo = b;
                terceiro = c;
            } else {
                segundo = c;
                terceiro = b;
            }
        } else if (b <= a && b <= c) {
            primeiro = b;
            if (a <= c) {
                segundo = a;
                terceiro = c;
            } else {
                segundo = c;
                terceiro = a;
            }
        } else {
            primeiro = c;
            if (a <= b) {
                segundo = a;
                terceiro = b;
            } else {
                segundo = b;
                terceiro = a;
            }
        }
    } else if (ordem == 'd') {
        // Decrescente
        if (a >= b && a >= c) {
            primeiro = a;
            if (b >= c) {
                segundo = b;
                terceiro = c;
            } else {
                segundo = c;
                terceiro = b;
            }
        } else if (b >= a && b >= c) {
            primeiro = b;
            if (a >= c) {
                segundo = a;
                terceiro = c;
            } else {
                segundo = c;
                terceiro = a;
            }
        } else {
            primeiro = c;
            if (a >= b) {
                segundo = a;
                terceiro = b;
            } else {
                segundo = b;
                terceiro = a;
            }
        }
    } else {
        cout << "Opção inválida. Digite 'c' ou 'd'.\n";
        return 1;
    }

    cout << "Ordem escolhida: " << primeiro << " " << segundo << " " << terceiro << endl;

    return 0;
}
  
