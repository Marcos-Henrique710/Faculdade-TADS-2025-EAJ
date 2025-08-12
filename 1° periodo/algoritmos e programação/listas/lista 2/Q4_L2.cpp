/*
4. Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros 
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide 
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o 
imposto a ser pago. 
*/
#include <iostream>
using namespace std;
 
int main(){
	float taxa1 = 0.01 , taxa2 = 0.015, preco;
	int ano;
	cout << "\n\tDigite o ano de fabrica do carro (antes ou depois de 1990) e o preco do carro: ";
	cin >> ano >> preco;
	if (ano < 1990){
		cout << "\n\tO preco do seu carro com o imposto e: " << preco + (taxa1*preco);
	}else{
		cout << "\n\tO preco do seu carro e: " << preco + (taxa2*preco);
	}
	return 0;
}
