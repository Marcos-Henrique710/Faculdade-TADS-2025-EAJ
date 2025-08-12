/*
10. A nota final de um estudante e calculada a partir de tr�s notas atribu�das entre o intervalo de 0 at� 10, 
respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. A m�dia 
das tr�s notas mencionadas anteriormente obedece aos pesos: Trabalho de Laborat�rio: 2; Avalia��o 
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno est� reprovado (media 
entre 0 e 2,9), de recupera��o (entre 3 e 4,9) ou se foi aprovado.  
*/

#include <iostream>
using namespace std;

int main(){
	//comandos de entrada e declaracao das variaveis:
	float p1 = 2, p2 = 3, p3 = 5, n1, n2, n3, mediaTotal;
	cout << "\n\tDigite as tres notas que o estudante tirou: ";
	cin >> n1 >> n2 >> n3;
	//processamento:
	mediaTotal = (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 + p3);
	if ((mediaTotal == 0) || (mediaTotal <= 2.9)){
		cout << "\n\tO aluno esta reprovado por: " << mediaTotal;
	}else{
		if ((mediaTotal == 3) || (mediaTotal <= 4.9)){
			cout << "\n\tO aluno esta de recuperacao por: " << mediaTotal;
		}else{
			if ((mediaTotal > 5) || (mediaTotal == 10)){
				cout << "\n\tO aluno foi aprovado por: " << mediaTotal;
			}
		}
	}
	
	return 0;
}
