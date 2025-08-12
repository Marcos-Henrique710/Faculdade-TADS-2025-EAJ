/*
Lista 7 - Questão 5
5. Ler a idade de uma pessoa e informar se é maior de idade.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    if(idade >= 18)
        cout << "Maior de idade\n";
    else
        cout << "Menor de idade\n";
    return 0;
}
