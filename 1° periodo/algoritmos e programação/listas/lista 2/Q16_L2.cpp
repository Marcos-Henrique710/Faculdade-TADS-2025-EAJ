/*
16. Leia a idade de uma pessoa e escreva se ela j� tem idade para tirar carteira de habilita��o (18 anos 
completos) ou n�o. Se n�o tiver idade, escreva tamb�m quantos anos faltam para que possa tirar a 
carteira. 
*/

#include <iostream>
using namespace std;

int main(){
	int idade, sub;
	cout << "\n\tDigite sua idade para verificar se voce pode dirigir ou nao: ";
	cin >> idade;
	sub = 18;
	
	if (idade >= 18){
		cout << "\n\tPode dirigir!";
	}else{
		if (idade < 18){
			cout << "\n\tNao pode dirigir ";
			cout << "faltam " << sub - idade << " anos para voce dirigir";
		}
	}
	return 0;
}
