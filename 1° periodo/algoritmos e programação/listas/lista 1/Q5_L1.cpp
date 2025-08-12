/*
5. Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso em horas, minutos e segundos.
*/
#include <iostream>
using namespace std;

int main() {
    int totalSegundos, horas, minutos, segundos, resto;
    cout << "Segundos: "; cin >> totalSegundos;
    horas = totalSegundos / 3600;
    resto = totalSegundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    cout << horas << "h " << minutos << "m " << segundos << "s";

    return 0;
}
