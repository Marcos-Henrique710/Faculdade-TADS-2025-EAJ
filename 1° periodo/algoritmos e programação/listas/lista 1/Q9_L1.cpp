/*
9. Leia dois valores inteiros nas variáveis Val1 e Val2, troque os seus conteúdos e escreva o resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois da troca o algoritmo terá que escrever Val1 = 11 e Val2 = 10.
*/
#include <iostream>
using namespace std;

int main() {
    int val1, val2, temp;
    cout << "Val1: "; cin >> val1;
    cout << "Val2: "; cin >> val2;
    temp = val1; val1 = val2; val2 = temp;
    cout << "Val1: " << val1 << ", Val2: " << val2;

    return 0;
}
