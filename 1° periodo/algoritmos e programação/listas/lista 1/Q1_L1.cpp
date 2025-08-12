/*
1. Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. 
Obs: Considere cada mês com 30 dias. 
*/

#include <iostream>
using namespace std;

int main() {
    int anos, meses, dias, total;

    cout << "Digite sua idade em anos: ";
    cin >> anos;
    cout << "Digite os meses: ";
    cin >> meses;
    cout << "Digite os dias: ";
    cin >> dias;

    total = anos * 365 + meses * 30 + dias;

    cout << "Idade expressa em dias: " << total;

    return 0;
}
