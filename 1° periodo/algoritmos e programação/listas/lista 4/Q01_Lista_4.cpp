/*
Lista 4 – Questão 1
Enunciado:
Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de código. Se o 
código for 1, mostrar o vetor na ordem direta (do primeiro até o último) , se o código for 2, mostrar o vetor 
na ordem inversa (do último até o primeiro).
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(20);
    for(int i=0;i<20;i++) cin>>v[i];
    int codigo; cin>>codigo;
    if(codigo==1){
        for(int i=0;i<20;i++) cout<<v[i]<<(i==19?'\n':' ');
    } else if(codigo==2){
        for(int i=19;i>=0;i--) cout<<v[i]<<(i==0?'\n':' ');
    } else cout<<"Codigo invalido\n";
    return 0;
}
