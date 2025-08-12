/*
10. A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, 
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média 
das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação 
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (media 
entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.  
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
