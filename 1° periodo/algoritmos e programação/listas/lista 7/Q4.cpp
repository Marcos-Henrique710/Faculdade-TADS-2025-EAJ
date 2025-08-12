/*
Lista 7 - Questão 4
4. Ler três números e escrever o maior deles.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cout << "Digite tres numeros: ";
    cin >> a >> b >> c;
    int maior = a;
    if(b > maior) maior = b;
    if(c > maior) maior = c;
    cout << "Maior: " << maior << "\n";
    return 0;
}
