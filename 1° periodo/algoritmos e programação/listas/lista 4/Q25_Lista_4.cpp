/*
Lista 4 – Questão 25
Enunciado:
Um armazém trabalha com 10 mercadorias diferentes identificadas pelos números inteiros de 0 à 9. Escreva 
um algoritmo que leia a quantidade vendida de cada mercadoria  no final do mês (armazenando -os em um 
vetor Q) e o preço unitário de cada uma (armazena ndo-os em um vetor P). Em seguida calcul e e escrev a o 
faturamento mensal do armazém.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(20); for(int i=0;i<20;i++) cin>>v[i];
    int val; cin>>val;
    int first=-1,last=-1;
    for(int i=0;i<20;i++) if(v[i]==val){ if(first==-1) first=i; last=i; }
    if(first==-1) cout<<"Valor nao encontrado\n"; else cout<<first<<" "<<last<<"\n";
    return 0;
}
