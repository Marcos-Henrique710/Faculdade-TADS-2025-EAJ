/*
3. Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por 
ano. Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja 
maior que Chico.  
*/
#include <iostream>
using namespace std;

int main() {
    float chico = 1.50, juca = 1.10;
    int anos = 0;

    while (juca <= chico) {
        chico += 0.02;
        juca += 0.03;
        anos++;
    }

    cout << "Anos necessarios para Juca ser maior que Chico: " << anos << endl;
    return 0;
}
