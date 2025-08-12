/*
Lista 4 – Questão 13
Enunciado:
Elabore um algoritmo que:  
Solicite um número inteiro N ao usuário.  
Declare um vetor V com N elementos inteiros.  
Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro 
do anterior.  
Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo menor 
elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário. Mostre o vetor 
antes e depois da mudança.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(15);
    for(int i=0;i<15;i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=0;i<15;i++) cout<<v[i]<<(i==14?'\n':' ');
    return 0;
}
