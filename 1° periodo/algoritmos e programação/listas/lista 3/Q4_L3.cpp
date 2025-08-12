/*
4. Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores 
positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6 
é perfeito, pois 1+2+3 = 6.  
*/
#include <iostream>
using namespace std;

int main() {
    int n, soma = 0;

    cout << "Digite um numero: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    if (soma == n)
        cout << n << " eh um numero perfeito." << endl;
    else
        cout << n << " nao eh um numero perfeito." << endl;

    return 0;
}
