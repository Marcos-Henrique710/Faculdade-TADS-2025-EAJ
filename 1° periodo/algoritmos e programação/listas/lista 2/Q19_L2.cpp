/*
19. Crie um programa que exibe se um dia � dia �til, fim de semana ou dia inv�lido dado o n�mero referente 
ao dia. Considere que domingo � o dia 1 e s�bado � o dia 7. 
*/

#include <iostream>
using namespace std;

int main(){
	int dia;
	cout << "\n\tDigite o dia da semana em numeros: ";
	cin >> dia;
	
	switch(dia){
		case 1: dia = 1;
		cout << "\n\tsegunda";
		cout << "\n\tdia util";
		break;
		case 2: dia = 2;
		cout << "\n\tterca";
		cout << "\n\tdia util";
		break;
		case 3: dia = 3;
		cout << "\n\tquarta";
		cout << "\n\tdia util";
		break;
		case 4: dia = 4;
		cout << "\n\tquinta";
		cout << "\n\tdia util";
		break;
		case 5: dia = 5;
		cout << "\n\tsexta";
		cout << "\n\tdia util";
		break;
		case 6: dia = 6;
		cout << "\n\tsabado";
		cout << "\n\tfim de semana";
		break;
		case 7: dia = 7;
		cout << "\n\tdomingo";
		cout << "\n\tfim de semana";
		break;
		default:
		cout << "\n\tdia invalido"; 
	}
	return 0;
}
