/*
1. Dados tr�s valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um 
tri�ngulo e, se forem, verificar e escrever se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles 
n�o formarem um tri�ngulo, escrever esta mensagem. Considere as seguintes propriedades:   
� O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;   
� Equil�teros: tem os comprimentos dos tr�s lados iguais;   
� Is�sceles: tem os comprimentos de dois lados iguais;  
�  Escaleno: tem os comprimentos dos tr�s lados diferentes.
*/

#include <iostream>
using namespace std;
int main(){
	int x,y,z;
	cout <<"\n\tDigite tres valores para verificar se e triangulo ou nao ";
	cin >> x >> y >> z;
	if((x<y+z) && (z<x+y) && (y<x+z)){
		cout <<"\n\tEsses valores forman um triangulo ";
		
		if((x==y) && (y==z)){
			cout <<"equilatero";
		}else{
			if((x==y) && (y==x)){
				cout <<"isoceles";
			}else{
				if((x!=y) && (y!=z))
				cout <<"escaleno";
			}
			
		}		
	}else{
		
		cout <<"\n\tEsses valores nao forman um triangulo";
	}
	 
}
