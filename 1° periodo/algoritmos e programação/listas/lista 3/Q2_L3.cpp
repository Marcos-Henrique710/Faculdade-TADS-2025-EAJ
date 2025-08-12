/*
2. Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a 
aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada um dos N 
motoristas:  - O número da carteira de motorista (inteiro);  - Número de multas;  - O valor de cada uma das multas.  
Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados 
(somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do motorista 
que obteve o maior número de multas.  
*/

#include <iostream>
using namespace std;

int main() {
    int N, carteira, numMultas, maiorMultas = -1, carteiraMaisMultas;
    float valor, totalMultas = 0, divida;

    cout << "Digite o numero de motoristas: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "\nMotorista " << i << endl;
        cout << "Numero da carteira: ";
        cin >> carteira;
        cout << "Numero de multas: ";
        cin >> numMultas;

        divida = 0;
        for (int j = 1; j <= numMultas; j++) {
            cout << "Valor da multa " << j << ": ";
            cin >> valor;
            divida += valor;
        }

        cout << "Divida do motorista " << carteira << ": R$ " << divida << endl;
        totalMultas += divida;

        if (numMultas > maiorMultas) {
            maiorMultas = numMultas;
            carteiraMaisMultas = carteira;
        }
    }

    cout << "\nTotal arrecadado: R$ " << totalMultas << endl;
    cout << "Carteira com maior numero de multas: " << carteiraMaisMultas << endl;
    return 0;
}
