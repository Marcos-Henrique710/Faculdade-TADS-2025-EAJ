/*
1. Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um 
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles 
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:   
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;   
• Equiláteros: tem os comprimentos dos três lados iguais;   
• Isósceles: tem os comprimentos de dois lados iguais;  
•  Escaleno: tem os comprimentos dos três lados diferentes.
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
