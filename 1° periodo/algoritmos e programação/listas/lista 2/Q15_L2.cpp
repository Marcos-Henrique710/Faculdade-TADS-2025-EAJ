/*
15. Calcule as raízes de uma equação de 2º grau. Observe que:   
• x = -b ± v?/2a, onde ? = B2 - 4ac;  
• ax2 + bx + c = 0 representa uma equação de 2º grau;  
• A variável a tem que ser diferente de zero. Caso seja igual, escreva a mensagem “Não é equação de 
segundo grau”;   
• Se ? < 0, não existe real. Escreva a mensagem “Não existe raiz”;  
• Se ? = 0, existe uma raiz real. Escreva a raiz e a mensagem “Raiz única”;   
• Se ? = 0, escreva as duas raízes reais. 
*/
#include <iostream>
using namespace std;

int main() {
    float a, b, c, delta, x1, x2;

    cout << "Digite os valores de a, b e c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Não é equação de segundo grau." << endl;
    } else {
        delta = (b * b) - (4 * a * c);

        if (delta < 0) {
            cout << "Não existe raiz real." << endl;
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            cout << "Raiz única: x = " << x1 << endl;
        } else {
            if (delta == 4) {
                x1 = (-b + 2) / (2 * a);
                x2 = (-b - 2) / (2 * a);
                cout << "Duas raízes reais:" << endl;
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }else if (delta == 9) {
                x1 = (-b + 3) / (2 * a);
                x2 = (-b - 3) / (2 * a);
                cout << "Duas raízes reais:" << endl;
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }else {
                cout << "Delta maior que zero"<< endl;
            }
        }
    }

    return 0;
}

