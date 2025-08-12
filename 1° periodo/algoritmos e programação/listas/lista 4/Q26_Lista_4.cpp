/*
Lista 4 – Questão 26
Enunciado:
Elabore um algoritmo que leia um vetor  de 15 posições de inteiros e o compacte, ou seja, elimine as posições 
com valores iguais a zero. Para  isso todos  os elementos  à frente  do valor  zero  devem  ser movidos  uma  posição 
para trás no vetor .
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(15); for(int i=0;i<15;i++) cin>>v[i];
    vector<int> res;
    for(int x:v) if(x!=0) res.push_back(x);
    while(res.size()<15) res.push_back(0);
    for(int i=0;i<15;i++) cout<<res[i]<<(i==14?'\n':' ');
    return 0;
}
