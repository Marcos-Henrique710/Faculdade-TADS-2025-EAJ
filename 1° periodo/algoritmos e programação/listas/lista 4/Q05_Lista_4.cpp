/*
Lista 4 – Questão 5
Enunciado:
Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo 
vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e 
assim sucessivamente.  Ao final, escreva os vetores A e B.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> A(20), B(20);
    for(int i=0;i<20;i++) cin>>A[i];
    for(int i=0;i<20;i++) B[i]=A[19-i];
    for(int i=0;i<20;i++) cout<<A[i]<<(i==19?'\n':' ');
    for(int i=0;i<20;i++) cout<<B[i]<<(i==19?'\n':' ');
    return 0;
}
