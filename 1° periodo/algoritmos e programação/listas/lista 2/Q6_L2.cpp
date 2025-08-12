/*
6. A escola �APRENDER� faz o pagamento de seus professores por hora/aula. Fa�a um algoritmo que calcule 
e escreva o sal�rio de um professor, sabendo que o valor da hora/aula segue a tabela abaixo:  

Professor n�vel 1  R$ 12,00 por hora aula  
Professor n�vel 2  R$ 17,00 por hora aula  
Professor n�vel 3  R$ 25,00 por hora aula  
*/

#include <iostream>
using namespace std;

int main() {
    int nivel;
    float horas, salario;

    cout << "Digite o n�vel do professor (1, 2 ou 3): ";
    cin >> nivel;

    cout << "Digite a quantidade de horas/aula trabalhadas: ";
    cin >> horas;

    if (nivel == 1) {
        salario = horas * 12.00;
        cout << "Sal�rio do professor n�vel 1: R$ " << salario << endl;
    }
    else if (nivel == 2) {
        salario = horas * 17.00;
        cout << "Sal�rio do professor n�vel 2: R$ " << salario << endl;
    }
    else if (nivel == 3) {
        salario = horas * 25.00;
        cout << "Sal�rio do professor n�vel 3: R$ " << salario << endl;
    }
    else {
        cout << "N�vel inv�lido. Por favor, digite 1, 2 ou 3." << endl;
    }

    return 0;
}

