/*
14. Leia 3 números inteiros e escreva uma das seguintes mensagens:  
• Todos os números são iguais;      
• Todos os números são diferentes;    
• Apenas dois números são iguais.    
*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "\n\tDigite tres numeros (iguais ou diferentes): ";
    cin >> num1 >> num2 >> num3;

    if ((num1 == num2) && (num2 == num3)) {
        cout << "\n\tTodos os numeros sao iguais!";
    } else if ((num1 != num2) && (num1 != num3) && (num2 != num3)) {
        cout << "\n\tTodos os numeros sao diferentes!";
    } else {
        cout << "\n\tApenas dois numeros sao iguais!";
    }

    return 0;
}
