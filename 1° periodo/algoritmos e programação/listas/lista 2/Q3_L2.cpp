/*
3. Calcule o peso ideal de uma pessoa. 
Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino). 
Utilize as seguintes fórmulas para cálculo do peso ideal:   
• Masculino = (72,7 x altura) - 58   
• Feminino = (62,1 x altura) - 44,7  
*/

#include <iostream>
using namespace std;

int main(){
	//variaveis:
	float alt, peso;
	char gen;
	
	//dados de entrada:
	cout <<"Digite seu genero e altura: ";
	cin >> gen >> alt;
	
	//processamento:
	if((gen == 'M') || (gen == 'F') || (gen == 'm') || (gen == 'f')){
		cout << "Entao seu genero e " << gen;
		
		if((gen == 'M') || (gen == 'm')){
			peso = (72.7*alt)-58;
			cout << " e o peso ideal para a sua altura e " << peso;
		}
		if((gen == 'F') || (gen == 'f')){
			peso = (62.1 * alt)-44.7;
			cout << " e o peso ideal para a sua altura e " << peso;
		}
	}else{
		cout << "Genero invalido";
	}
	
	return 0;	
}
