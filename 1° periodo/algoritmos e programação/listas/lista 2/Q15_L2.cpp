/*
15. Calcule as ra�zes de uma equa��o de 2� grau. Observe que:   
� x = -b � v?/2a, onde ? = B2 - 4ac;  
� ax2 + bx + c = 0 representa uma equa��o de 2� grau;  
� A vari�vel a tem que ser diferente de zero. Caso seja igual, escreva a mensagem �N�o � equa��o de 
segundo grau�;   
� Se ? < 0, n�o existe real. Escreva a mensagem �N�o existe raiz�;  
� Se ? = 0, existe uma raiz real. Escreva a raiz e a mensagem �Raiz �nica�;   
� Se ? = 0, escreva as duas ra�zes reais. 
*/
#include <iostream>
using namespace std;

int main() {
    float a, b, c, delta, x1, x2;

    cout << "Digite os valores de a, b e c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "N�o � equa��o de segundo grau." << endl;
    } else {
        delta = (b * b) - (4 * a * c);

        if (delta < 0) {
            cout << "N�o existe raiz real." << endl;
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            cout << "Raiz �nica: x = " << x1 << endl;
        } else {
            if (delta == 4) {
                x1 = (-b + 2) / (2 * a);
                x2 = (-b - 2) / (2 * a);
                cout << "Duas ra�zes reais:" << endl;
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }else if (delta == 9) {
                x1 = (-b + 3) / (2 * a);
                x2 = (-b - 3) / (2 * a);
                cout << "Duas ra�zes reais:" << endl;
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }else {
                cout << "Delta maior que zero"<< endl;
            }
        }
    }

    return 0;
}

