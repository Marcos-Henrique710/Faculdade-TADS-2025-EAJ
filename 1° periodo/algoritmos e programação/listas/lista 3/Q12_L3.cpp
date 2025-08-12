/*
12. O número 3025 possui a seguinte característica: 30+25 = 55 e 552 = 3025. Elaborar um algoritmo que leia 
N números de 4 algarismos e escreva a mensagem “positivo” se o número tiver essa característica e 
“negativo” se não tiver.  
*/
#include <iostream>
using namespace std;

int main() {
    int N, num, parte1, parte2;

    cout << "Digite a quantidade de numeros: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Numero " << i << ": ";
        cin >> num;

        parte1 = num / 100;
        parte2 = num % 100;

        int soma = parte1 + parte2;
        if (soma * soma == num)
            cout << "positivo" << endl;
        else
            cout << "negativo" << endl;
    }

    return 0;
}
