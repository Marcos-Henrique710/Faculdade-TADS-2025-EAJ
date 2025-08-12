/*
Lista 7 - Questão 2
2. Ler um número e verificar se é múltiplo de 3.
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
    if(num % 3 == 0)
        cout << "Multiplo de 3\n";
    else
        cout << "Nao e multiplo de 3\n";
    return 0;
}
