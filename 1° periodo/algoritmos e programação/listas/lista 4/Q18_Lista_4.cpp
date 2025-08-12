/*
Lista 4 – Questão 18
Enunciado:
Elabore um algoritmo que declare dois vetores A e B de 10 elementos de inteiros, leia os seus elementos e 
intercale os dois vetores A e B formando o vetor C (de 20 elementos).
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#include <map>
int main(){
    vector<int> v(20); for(int i=0;i<20;i++) cin>>v[i];
    map<int,int> freq; for(int x:v) freq[x]++;
    for(auto &p:freq) if(p.second>1) cout<<p.first<<" "<<p.second<<"\n";
    return 0;
}
