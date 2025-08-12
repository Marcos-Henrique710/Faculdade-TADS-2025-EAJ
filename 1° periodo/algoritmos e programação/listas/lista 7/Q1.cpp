/*
Lista 7 - Questão 1
1. Ler dois números inteiros e escrever o maior deles.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    cout << "Digite dois numeros: ";
    cin >> a >> b;
    if(a > b)
        cout << "Maior: " << a << "\n";
    else if(b > a)
        cout << "Maior: " << b << "\n";
    else
        cout << "Sao iguais\n";
    return 0;
}
