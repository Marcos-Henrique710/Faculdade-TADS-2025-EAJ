/*
Lista 5 - Questão 11
11. Leia matriz MxN, verifique e escreva as coordenadas do maior e do menor elementos.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    int M,N;
    cout<<"Digite M e N: "; cin>>M>>N;
    vector<vector<int>> A(M, vector<int>(N));
    cout<<"Digite "<<M*N<<" inteiros:\n";
    for(int i=0;i<M;i++) for(int j=0;j<N;j++) cin>>A[i][j];
    int maior=A[0][0], menor=A[0][0]; pair<int,int> pm={0,0}, pn={0,0};
    for(int i=0;i<M;i++) for(int j=0;j<N;j++){
        if(A[i][j]>maior){ maior=A[i][j]; pm={i,j}; }
        if(A[i][j]<menor){ menor=A[i][j]; pn={i,j}; }
    }
    cout<<"Maior: "<<maior<<" em ("<<pm.first<<","<<pm.second<<")\n";
    cout<<"Menor: "<<menor<<" em ("<<pn.first<<","<<pn.second<<")\n";
    return 0;
}
