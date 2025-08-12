/*
Lista 4 – Questão 19
Enunciado:
Elabore um algoritmo que leia um vetor de 6 elementos inteiros  representando o conjunto de números 
sorteados na mega sena.  Leia, a seguir, para cada um dos N apostador es, um vetor contendo os  6 números 
da sua aposta . Verifique para cada apostador o seu número total de acertos  na mega sena  (para cada número 
corret o, o apostador ganha 1 acerto)  e escrever se ele “não ganhou”, “ganhou a quadra”, “ganhou a quina” 
ou “ganhou a mega”.  O algoritmo deverá finalizar quando o usuário desejar .
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(10); for(int i=0;i<10;i++) cin>>v[i];
    int last = v.back();
    for(int i=(int)v.size()-1;i>0;i--) v[i]=v[i-1];
    v[0]=last;
    for(int i=0;i<10;i++) cout<<v[i]<<(i==9?'\n':' ');
    return 0;
}
