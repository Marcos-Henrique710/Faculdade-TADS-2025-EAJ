/*
Lista 4 – Questão 12
Enunciado:
Elabore um algoritmo que leia um vetor V de 10 posições de inteiros, não permitindo que sejam digitados 
números negativos. Em seguida, leia um número inteiro qualquer e verifique se o número existe no vetor. Se 
existir, informe o seu índice. Se não existir , informe a mensagem “Número não localizado!”.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(20); for(int i=0;i<20;i++) cin>>v[i];
    vector<int> pares, impares;
    for(int x:v) (x%2==0?pares:impares).push_back(x);
    for(size_t i=0;i<pares.size();i++) cout<<pares[i]<<(i+1==pares.size()?"\n":" ");
    for(size_t i=0;i<impares.size();i++) cout<<impares[i]<<(i+1==impares.size()?"\n":" ");
    return 0;
}
