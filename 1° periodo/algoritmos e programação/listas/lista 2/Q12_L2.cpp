/*
12. Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou 
não se aposentar. As condições para aposentadoria são:  
• Ter pelo menos 65 anos;  
• Ou ter trabalhado pelo menos 30 anos;   
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 
*/

#include <iostream>
using namespace std;

int main(){
	int idade, tempoTrabalho;
	cout << "\n\tDigite sua idade e o tempo que voce trabalhou: ";
	cin >> idade >> tempoTrabalho;
	
	if ((idade >= 65) && (tempoTrabalho >= 30)){
		cout << "\n\tVoce tem direito a aposentadoria!";
	}else{
		if ((idade >= 60) && (tempoTrabalho >= 25)){
			cout << "\n\tVoce tem direito a aposentadoria!";
		}else{
			if ((idade < 65) || (tempoTrabalho < 30) || (idade < 60) || (tempoTrabalho < 25)){
				cout <<"\n\tVoce nao tem direito a aposentadoria!";
			}
		}
	}
	
	return 0;
}
