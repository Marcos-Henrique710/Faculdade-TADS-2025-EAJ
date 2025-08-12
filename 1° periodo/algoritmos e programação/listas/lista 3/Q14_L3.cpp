/*
14. Elabore um algoritmo que apresente um menu contendo as opções 1-Triângulo, 2-Quadrado, 3
Retângulo, 4-Trapézio, 5-Círculo, 6-Sair. Em seguida, de acordo com a opção escolhida pelo usuário, o 
algoritmo deve solicitar as informações necessárias para cálculo da área, efetuar o cálculo e escrever o 
resultado. O algoritmo só deverá finalizar quando o usuário escolher a opção 6-Sair.  
*/
#include <iostream>
using namespace std;

int main() {
    int opcao;
    float base, altura, lado, maior, menor, raio;

    do {
        cout << "\nMenu de Areas:\n1-Triangulo\n2-Quadrado\n3-Retangulo\n4-Trapezio\n5-Circulo\n6-Sair\nOpcao: ";
        cin >> opcao;

        if (opcao == 1) {
            cout << "Base e altura: ";
            cin >> base >> altura;
            cout << "Area do triangulo: " << (base * altura) / 2 << endl;
        } else if (opcao == 2) {
            cout << "Lado: ";
            cin >> lado;
            cout << "Area do quadrado: " << lado * lado << endl;
        } else if (opcao == 3) {
            cout << "Base e altura: ";
            cin >> base >> altura;
            cout << "Area do retangulo: " << base * altura << endl;
        } else if (opcao == 4) {
            cout << "Base maior, base menor e altura: ";
            cin >> maior >> menor >> altura;
            cout << "Area do trapezio: " << ((maior + menor) * altura) / 2 << endl;
        } else if (opcao == 5) {
            cout << "Raio: ";
            cin >> raio;
            cout << "Area do circulo: " << 3.1416 * raio * raio << endl;
        }
    } while (opcao != 6);

    return 0;
}
