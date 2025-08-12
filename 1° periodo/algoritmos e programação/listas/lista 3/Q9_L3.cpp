/*
9. Elabore um algoritmo que mostre o calendário de um determinado mês. Os dados de entrada são o mês 
(cujos dados devem ser mostrados) e o dia da semana em que esse mês inicia. Assuma que esse mês está 
em um ano que não é bissexto, porém considere meses de 28, 30 e 31. O resultado deve ser como 
mostrado abaixo. Ex: janeiro, começando na 5a feira:  
*/
#include <iostream>
using namespace std;

int main() {
    int mes, diaInicio;

    cout << "Digite o numero do mes (1 a 12): ";
    cin >> mes;
    cout << "Digite o dia da semana do inicio do mes (1=Dom, ..., 7=Sab): ";
    cin >> diaInicio;

    int diasMes;

    if (mes == 2) diasMes = 28;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) diasMes = 30;
    else diasMes = 31;

    cout << "Dom Seg Ter Qua Qui Sex Sab\n";

    for (int i = 1; i < diaInicio; i++) {
        cout << "    ";
    }

    for (int dia = 1; dia <= diasMes; dia++) {
        cout.width(3);
        cout << dia << " ";
        if ((dia + diaInicio - 1) % 7 == 0)
            cout << endl;
    }
    cout << endl;

    return 0;
}
