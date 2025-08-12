/*
Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por 
um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela 
abaixo:   

CONSUMO (Km/l)  MENSAGEM  
Menor que 8     Venda o carro!  
Entre 8 e 12    Econômico!  
Maior que 12    Super econômico!                 

*/

#include <iostream>
using namespace std;

int main(){
	float km, l, result;
	cout << "\n\tDigite a distancia em km e a quantidade de litros gastos ate la: ";
	cin >> km >> l;
	
	result = km/l;
	if (result < 8){
		cout << "\n\tVenda o carro!";
	}else{
		if (result <=12){
			cout << "\n\tEconomico!";
		}else{
			if (result > 12){
				cout << "\n\tSuper economico!";
			}
		}
	}
	
	return 0;
}
