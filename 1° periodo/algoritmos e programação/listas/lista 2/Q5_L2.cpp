/*
5. Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, 
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e 
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de 
aumento. Mostre o salário antigo, o novo salário e a diferença.  

CÓDIGO  CARGO  PERCENTUAL  
101    Gerente     10%
102    Engenheiro  20%    
103    Técnico     30%   

*/

#include <iostream>
using namespace std;

int main(){
	//variaveis e comandos de entrada:
	
	float aumentoS, salario, percent1 = 0.10, percent2 = 0.20, percent3 = 0.30, percent4 = 0.40;
	int cod;
	cout << "\n\tDigite o codigo e o salario para ver o aumento de salario: ";
	cin >> cod >> salario;
	
	//processamento:
	if (cod == 101){
		cout << "\n\tSeu salario antes era " << salario;
		cout << "\n\tSeu salario agora e " << (percent1*100) + salario;
        aumentoS = (percent1*100) + salario;
		cout << "\n\tO aumento foi de R$" << aumentoS - salario;
	}else{
		if (cod == 102){
		cout << "\n\tSeu salario antes era " << salario;
		cout << "\n\tSeu salario agora e " << (percent2*100) + salario;
        aumentoS = (percent2*100) + salario;
		cout << "\n\tO aumento foi de R$" << aumentoS - salario;
		}else{
			if (cod == 103){
				cout << "\n\tSeu salario antes era " << salario;
		cout << "\n\tSeu salario agora e " << (percent3*100) + salario;
        aumentoS = (percent3*100) + salario;
		cout << "\n\tO aumento foi de R$" << aumentoS - salario;
			}else{
				if (cod == 104){
					cout << "\n\tSeu salario antes era " << salario;
		cout << "\n\tSeu salario agora e " << (percent4*100) + salario;
        aumentoS = (percent4*100) + salario;
		cout << "\n\tO aumento foi de R$" << aumentoS - salario;
				}else{
					if (cod > 104){
					cout << "\n\tInforme um codigo valido";
				    }
				}
			}
		}
	}
    return 0;
}
