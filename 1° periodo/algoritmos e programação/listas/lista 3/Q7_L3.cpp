/*
7. Elabore um algoritmo que implemente uma calculadora real: o usuário digita um número, depois a 
operação (+, -, *, /), outro número, outra operação, outro número, e assim continua até que ele digite 
enfim o sinal “=”, quando então a calculadora mostra o resultado. Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 + 
4 = 6. O algoritmo deve resolver a expressão na ordem de digitação. 
*/
#include <iostream>
using namespace std;

int main() {
    float resultado, numero;
    char op;

    cout << "Digite um numero: ";
    cin >> resultado;

    while (true) {
        cout << "Digite uma operacao (+, -, *, /) ou '=' para finalizar: ";
        cin >> op;

        if (op == '=') break;

        cout << "Digite outro numero: ";
        cin >> numero;

        if (op == '+') resultado += numero;
        else if (op == '-') resultado -= numero;
        else if (op == '*') resultado *= numero;
        else if (op == '/') resultado /= numero;
        else cout << "Operacao invalida.\n";
    }

    cout << "Resultado final: " << resultado << endl;
    return 0;
}
