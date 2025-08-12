/*
Lista 4 – Questão 21
Enunciado:
Elabore um algoritmo que gere automaticamente um vetor de 30 elementos contendo a sequencia de 
números inteiros escolhida pelo usuário no menu abaixo:  
Menu Principal  
------------------------------------------------------  
1 - Sequência de Fibonacci  
2 - Números Triangulares  
3 - Números Primos  
4 - Números Quadrangulares  
5 - Divisíveis por 3 e 5 simultaneamente  
6 - Sair
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(10); for(int i=0;i<10;i++) cin>>v[i];
    int pos, val; cin>>pos>>val;
    if(pos<0||pos>10){ cout<<"Posicao invalida\n"; return 0; }
    v.push_back(0);
    for(int i=(int)v.size()-1;i>pos;i--) v[i]=v[i-1];
    v[pos]=val;
    for(int i=0;i<10;i++) cout<<v[i]<<(i==9?'\n':' ');
    return 0;
}
