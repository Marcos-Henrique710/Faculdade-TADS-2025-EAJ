/*
O cardápio de uma lanchonete é o seguinte:   
  
Sanduíche   
Código  Descrição  Preço Unitário  
100  Cachorro quente   1,10  
101  Baurú simples     1,30  
102  Baurú com ovo     1,50  
103  Hamburger         1,10  
104  Cheesburger       1,30  
Bebida   
Código  Descrição  Preço Unitário  
105  Refrigerante  1,00  
106  Suco  2,00  
107  Nescau  1,50  
  
Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade 
de cada um e calcule o valor a ser pago por aquele lanche.  
*/
#include <iostream>
using namespace std;

int main(){
	//tabela e declaracao das variaveis:
	int cod1, cod2;
	float preco1, preco2, precoT;
	cout << "\nSanduiche:";   
    cout << "\n\tCodigo  Descricao  Preco Unitario";  
    cout << "\n\t100  \tCachorro quente   1,10";  
    cout << "\n\t101  \tBauru simples     1,30"; 
    cout << "\n\t102  \tBauru com ovo     1,50";  
    cout << "\n\t103  \tHamburger         1,10";  
    cout << "\n\t104  \tCheesburger       1,30";  
    cout << "\nBebida:";   
    cout << "\n\tCodigo  Descricao  Preco Unitario";  
    cout << "\n\t105  \tRefrigerante  \t1,00";  
    cout << "\n\t106  \tSuco  \t\t2,00";  
    cout << "\n\t107  \tNescau  \t1,50";
    
    //comandos de entrada:
    cout << "\n\nDigite o codigo do seu pedido (sanduice e bebida): ";
    cin >> cod1 >> cod2;
    
    //processamento:
    
	if ((cod1 == 100) || (cod1 == 103)){
		preco1 = 1.10;
		cout << "\nseu pedido esta por: " << preco1; 
	}else{
		if ((cod1 == 101) || (cod1 == 104)){
			preco1 = 1.30;
			cout << "\nseu pedido esta por: " << preco1;
		}else{
			if(cod1 == 102){
				preco1 = 1.50;
				cout << "\nseu pedido esta por: " <<preco1;
			}
		}
			
	}
	if (cod2 == 105){
		preco2 = 1.00;
		cout << "\nseu pedido esta por: " << preco2; 
	}else{
		if (cod2 == 106){
			preco2 = 2.00;
			cout << "\nseu pedido esta por: " << preco2;
		}else{
			if(cod2 == 107){
				preco2 = 1.50;
				cout << "\nseu pedido esta por: " <<preco2;
			}
		}
			
	} 
	//saida:
	cout << "\nSeu pedido completo sai por: R$" <<preco1 + preco2;
    
   return 0; 
}
