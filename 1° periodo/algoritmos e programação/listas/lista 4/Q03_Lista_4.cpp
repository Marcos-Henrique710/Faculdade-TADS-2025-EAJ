/*
Lista 4 – Questão 3
Enunciado:
Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais 
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em 
índices ímpares. Mostre somente os elementos solicita dos.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<int> v(15);
    for(int i=0;i<15;i++) cin>>v[i];
    int opc; cin>>opc;
    if(opc==1){
        for(int i=0;i<15;i+=2) cout<<v[i]<<(i+2>=15?'\n':' ');
    } else if(opc==2){
        bool first=true;
        for(int i=1;i<15;i+=2){ if(!first) cout<<" "; cout<<v[i]; first=false; }
        cout<<"\n";
    } else cout<<"Opcao invalida\n";
    return 0;
}
