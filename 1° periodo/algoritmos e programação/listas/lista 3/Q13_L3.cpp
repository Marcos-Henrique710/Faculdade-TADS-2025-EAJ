/*
13. Elabore um algoritmo que leia um número inteiro qualquer e verifique se ele é quadrangular. Se for, 
mostrar os próximos 10 quadrangulares depois dele. Se não for, informar. OBS: Os números 
quadrangulares são 1, 4, 9, 16, 25, ..., ou seja, 1x1, 2x2, 3x3, 4x4, ...  
*/
#include <iostream>
using namespace std;

int main() {
    int n, raiz = 1;

    cout << "Digite um numero: ";
    cin >> n;

    while (raiz * raiz < n) {
        raiz++;
    }

    if (raiz * raiz == n) {
        cout << n << " eh quadrangular. Proximos 10 quadrangulares: ";
        for (int i = 1; i <= 10; i++) {
            cout << (raiz + i)*(raiz + i) << " ";
        }
        cout << endl;
    } else {
        cout << n << " nao eh quadrangular." << endl;
    }

    return 0;
}
