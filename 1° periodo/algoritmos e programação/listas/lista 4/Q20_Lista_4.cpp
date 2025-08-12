/*
Lista 4 – Questão 20
Enunciado:
Elabore um algoritmo que leia dois vetores de inteiros X e Y , cada um com 5 elementos (não permita 
elementos repetidos dentro de um mesmo vetor). Em seguida calcule e escreva os seguintes vetores 
resultantes:  
a. Soma: soma dos elementos de X e Y de mesmo índice;  
b. Distância: distância entre os elementos de X e Y de mesmo índice;
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(20); for(int i=0;i<20;i++) cin>>v[i];
    vector<int> pos, neg, zer;
    for(int x:v){ if(x>0) pos.push_back(x); else if(x<0) neg.push_back(x); else zer.push_back(x); }
    for(int x:pos) cout<<x<<" "; cout<<"\n";
    for(int x:neg) cout<<x<<" "; cout<<"\n";
    for(int x:zer) cout<<x<<" "; cout<<"\n";
    return 0;
}
