/*
Lista 4 – Questão 15
Enunciado:
Elabore um algoritmo que leia dois vetores de mesmo tamanho M e N, sendo M contendo as matrículas dos 
alunos  (inteiros)  e N suas respectivas notas (o tamanho deve ser digitado pelo usuário). Calcule a média de 
todas as notas de N. Escreva primeiramente o conjunto das notas maiores do que a média calculada. Em 
seguida, escreva as matrículas dos alunos cujas notas foram meno res do que a média.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(20);
    for(int i=0;i<20;i++) cin>>v[i];
    int cnt=0; long long s=0;
    for(int x:v) if(x>0){ cnt++; s+=x; }
    cout<<cnt<<" "<<s<<"\n";
    return 0;
}
