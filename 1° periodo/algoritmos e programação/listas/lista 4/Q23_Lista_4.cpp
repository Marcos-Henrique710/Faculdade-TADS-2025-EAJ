/*
Lista 4 – Questão 23
Enunciado:
Elabore um algoritmo que leia os 9 primeiros elementos de um vetor de 10 elementos, um índice P (entre 0 
e 8, não aceitar valores fora dessa faixa) e um número inteiro X.  Em seguida inclua o valor de X na posição P 
do vetor B fazendo com que os elementos existentes dentro do vetor (da posição P+1 em diante) sejam 
deslocados de uma posição para o final (Considere que existe espaço no vetor para o deslocamento). Logo 
após o processamento escrever o vetor B.  
Vetor B  11 21 34 56 78 23 54 78 99  
(inicial)  0 1 2 3 4 5 6 7 8 9 
 P = 6; X = 80;  
Vetor B  11 21 34 56 78 23 80 54 78 99 
(final)  0 1 2 3 4 5 6 7 8 9
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> A(10), B(10), C(20);
    for(int i=0;i<10;i++) cin>>A[i];
    for(int i=0;i<10;i++) cin>>B[i];
    for(int i=0;i<10;i++){ C[2*i]=A[i]; C[2*i+1]=B[i]; }
    for(int i=0;i<20;i++) cout<<C[i]<<(i==19?'\n':' ');
    return 0;
}
