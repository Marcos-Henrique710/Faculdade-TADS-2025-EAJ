/*
3. Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de 
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos 
a vista ou parcelado em até 10 vezes sem juros.  
*/

#include <iostream>
using namespace std;

int main() {
    float totalCompra, prestacao;
    int parcelas;

    cout << "Valor total da compra: ";
    cin >> totalCompra;
    cout << "Quantidade de parcelas (1 a 10): ";
    cin >> parcelas;

    prestacao = totalCompra / parcelas;

    cout << "Cada prestacao vale: R$ " << prestacao;

    return 0;
}
