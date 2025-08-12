/*
11. Leia três notas e três pesos, um para cada nota, calcule e escreva a média aritmética e a média ponderada das três notas e, nos dois casos, quanto falta para o aluno ser aprovado por média (considere a média para aprovação igual a 6,0).
*/
#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, p1, p2, p3, ma, mp;
    cout << "Nota 1 e peso: "; cin >> n1 >> p1;
    cout << "Nota 2 e peso: "; cin >> n2 >> p2;
    cout << "Nota 3 e peso: "; cin >> n3 >> p3;
    ma = (n1 + n2 + n3) / 3;
    mp = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
    cout << "Media Aritmetica: " << ma << endl;
    cout << "Falta p/ 6.0: " << 6.0 - ma << endl;
    cout << "Media Ponderada: " << mp << endl;
    cout << "Falta p/ 6.0: " << 6.0 - mp;

    return 0;
}
