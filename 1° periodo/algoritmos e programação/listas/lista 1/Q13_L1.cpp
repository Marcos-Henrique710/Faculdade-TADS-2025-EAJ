/*
13. Leia os valores dos lados de um retângulo, calcule e escreva sua área.
*/
#include <iostream>
using namespace std;

int main() {
    float base, altura, area;
    cout << "Base: "; cin >> base;
    cout << "Altura: "; cin >> altura;
    area = base * altura;
    cout << "Area: " << area;

    return 0;
}
