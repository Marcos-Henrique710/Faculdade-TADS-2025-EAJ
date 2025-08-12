/*
Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e 
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada.  
*/
#include <iostream>
using namespace std;

int main(){
	//comandos de entrada:
	
	int numero;
	char letra;
	cout << "\n\tDigite um numero e uma letra (a ou s): ";
	cin >> numero >> letra;
	
	//processamento:
	if ((letra == 'a') || (letra == 'A')){
		cout << "\n\tO resultado foi: " << numero - 10;
	}else{
		if ((letra == 's') || (letra == 'S')){
			cout << "\n\tO resultado foi: " << numero + 10;
		}else{
			if ((letra != 's') || (letra != 'S') || (letra != 'A') || (letra != 'a')){
				cout << "\n\tDigite uma letra valida";
			}
		}
	}
	return 0;
}
