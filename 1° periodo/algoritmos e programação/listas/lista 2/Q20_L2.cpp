/*
20. Calcular o valor a ser pago por um plano de saúde dada a idade do conveniado. Considere que todos 
pagam R$ 100 mais um adicional conforme a seguinte tabela:   
• Crianças com menos de 10 anos pagam R$80;   
• Conveniados com idade entre 10 e 30 anos pagam R$50;   
• Conveniados com idade entre 31 e 60 anos pagam R$ 95;   
• Conveniados com mais de 60 anos pagam R$130. 
*/

#include <iostream>
using namespace std;

int main(){
	float valorT, idade;
	cout << "\n\tDigite a idade do conveniado: ";
	cin >> idade;
	valorT = 100;
	
	if (idade < 10){
		cout << "\n\tvoce ira pagar " << valorT + 80;
	}else{
		if ((idade > 10) && (idade <= 30)){
		cout << "\n\tvoce ira pagar " << valorT + 50;
		}else{
			if((idade > 31) && (idade <= 60)){
				cout << "\n\tvoce ira pagar " << valorT + 95;
			}else{
				if (idade > 60){
					cout << "\n\tvoce ira pagar " << valorT + 130;
				}
			}
		}
 	}
    return 0;
}
