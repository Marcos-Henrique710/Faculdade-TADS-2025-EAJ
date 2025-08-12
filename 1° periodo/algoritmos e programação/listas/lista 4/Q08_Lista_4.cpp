/*
Lista 4 – Questão 8
Enunciado:
Elabore um algoritmo que leia dois vetores, A ( 20 elementos inteiros) e B ( 20 elementos inteiros), e escreva 
um terceiro vetor C contendo todos os elementos comuns aos dois vetores  A e B .
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(10);
    for(int i=0;i<10;i++) cin>>v[i];
    int sp=0,sn=0;
    for(int x:v){ if(x>=0) sp+=x; else sn+=x; }
    cout<<sp<<" "<<sn<<"\n";
    return 0;
}
