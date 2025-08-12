/*
8. Uma rainha requisitou os serviços de um monge, o qual exigiu o pagamento em grãos de trigo da seguinte 
maneira: os grãos de trigo seriam dispostos em um tabuleiro de xadrez, de tal forma que a primeira casa  
do tabuleiro tivesse um grão, e as casas seguintes o dobro da anterior. Considere que o tabuleiro de 
xadrez é 8x8 e que o número da casa varia de 1-8 para a primeira linha, de 9-16 para a segunda linha e 
assim sucessivamente. Construa um algoritmo que calcule quantos grãos de trigo a Rainha deverá pagar 
ao monge a partir da leitura do número da casa desejada.  
*/
#include <iostream>
using namespace std;

int main() {
    int casa;
    unsigned long long graos = 1;

    cout << "Digite o numero da casa (1 a 64): ";
    cin >> casa;

    for (int i = 2; i <= casa; i++) {
        graos *= 2;
    }

    cout << "Graos na casa " << casa << ": " << graos << endl;
    return 0;
}
