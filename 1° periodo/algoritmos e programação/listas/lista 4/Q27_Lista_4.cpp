/*
Lista 4 – Questão 27
Enunciado:
Elabore um algoritmo que leia um vetor de 10 posições de inteiros, ordene -o (ordem crescente) e o escreva.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(10); for(int i=0;i<10;i++) cin>>v[i];
    sort(v.begin(), v.end());
    for(int i=0;i<10;i++) cout<<v[i]<<(i==9?'\n':' ');
    return 0;
}
