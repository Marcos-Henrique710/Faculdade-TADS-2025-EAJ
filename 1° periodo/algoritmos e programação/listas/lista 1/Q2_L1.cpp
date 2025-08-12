/*
2. Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das 
informações: número de anos que ele fuma, quantidade de cigarros fumados por dia e preço de 
uma carteira (contendo 10 cigarros).  
*/

#include <iostream>
using namespace std;

int main() {
    int anos, porDia;
    float precoCarteira, total;

    cout << "Anos fumando: ";
    cin >> anos;
    cout << "Cigarros por dia: ";
    cin >> porDia;
    cout << "Preco de uma carteira (10 cigarros): ";
    cin >> precoCarteira;

    total = (anos * 365 * porDia / 10.0) * precoCarteira;

    cout << "Total gasto: R$ " << total;

    return 0;
}
