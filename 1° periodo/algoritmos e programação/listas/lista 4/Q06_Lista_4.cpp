/*
Lista 4 – Questão 6
Enunciado:
Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar o primeiro elemento com o 
último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente.  Ao final, 
escreva o vetor A modificado.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> A(20);
    for(int i=0;i<20;i++) cin>>A[i];
    for(int i=0;i<10;i++) swap(A[i],A[19-i]);
    for(int i=0;i<20;i++) cout<<A[i]<<(i==19?'\n':' ');
    return 0;
}
