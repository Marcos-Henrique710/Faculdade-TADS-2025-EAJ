/*
18. Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar, 
verifique e escreva se o parcelamento foi com juros ou se foi sem juros.   
*/

#include <iostream>
using namespace std;

int main(){
	float valorT, valorP, quantP;
	cout << "\n\tDigite o valor total de uma compra, o valor da parcela e a quantidade de parcelas: ";
	cin >> valorT >> valorP >> quantP;
    float totalP = valorP * quantP;
	
	if (totalP == valorT){
		cout << "\n\to parcelamento foi sem juros";
	}else{
		if (totalP != valorT){
			cout << "\n\to parcelamento foi com juros";
		}
	}
	return 0;
}
