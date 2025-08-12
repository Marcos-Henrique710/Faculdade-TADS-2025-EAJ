/*
Lista 7 - Questão 3
3. Ler um número e escrever se é positivo, negativo ou zero.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if(num > 0)
        cout << "Positivo\n";
    else if(num < 0)
        cout << "Negativo\n";
    else
        cout << "Zero\n";
    return 0;
}
