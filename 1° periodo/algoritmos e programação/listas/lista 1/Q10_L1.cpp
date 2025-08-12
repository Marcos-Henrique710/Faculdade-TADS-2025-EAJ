/*
10. Leia dois valores reais para as variáveis A e B e efetue as operações de adição, subtração, multiplicação e resto da divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção (E) e disjunção (OU), apresentando ao final os resultados obtidos.
*/
#include <iostream>
using namespace std;

int main() {
    float A, B;
    bool C, D;
    cout << "A: "; cin >> A;
    cout << "B: "; cin >> B;
    cout << "Soma: " << A + B << endl;
    cout << "Subtracao: " << A - B << endl;
    cout << "Multiplicacao: " << A * B << endl;
    cout << "Resto: " << int(A) % int(B) << endl;
    cout << "C (0 ou 1): "; cin >> C;
    cout << "D (0 ou 1): "; cin >> D;
    cout << "!C: " << !C << endl;
    cout << "!D: " << !D << endl;
    cout << "C && D: " << (C && D) << endl;
    cout << "C || D: " << (C || D);

    return 0;
}
