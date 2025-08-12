/*
10. Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva 
uma tabela de resultados (formatada com linhas verticais e horizontais). A tabela deverá conter cada 
valor lido em uma coluna, seu quadrado (na segunda linha) e seu cubo (na terceira linha). Finalizar a 
entrada de dados quando os 4 valores digitados forem iguais a zero. Se for digitado algum número 
negativo, solicitar que o usuário digite novamente até que o número seja positivo.  
*/
#include <iostream>
using namespace std;

int main() {
    int val1, val2, val3, val4;

    while (true) {
        cout << "Digite 4 numeros positivos: ";
        cin >> val1 >> val2 >> val3 >> val4;

        if (val1 == 0 && val2 == 0 && val3 == 0 && val4 == 0) break;

        if (val1 < 0 || val2 < 0 || val3 < 0 || val4 < 0) {
            cout << "Valores negativos nao sao permitidos.\n";
            continue;
        }

        cout << "+------+------+------+------+" << endl;
        cout << "| " << val1 << " | " << val2 << " | " << val3 << " | " << val4 << " |" << endl;
        cout << "+------+------+------+------+" << endl;
        cout << "| " << val1*val1 << " | " << val2*val2 << " | " << val3*val3 << " | " << val4*val4 << " |" << endl;
        cout << "+------+------+------+------+" << endl;
        cout << "| " << val1*val1*val1 << " | " << val2*val2*val2 << " | " << val3*val3*val3 << " | " << val4*val4*val4 << " |" << endl;
        cout << "+------+------+------+------+" << endl;
    }

    return 0;
}
