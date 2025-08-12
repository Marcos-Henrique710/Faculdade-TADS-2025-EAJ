/*
Lista 5 - Questão 4
4. Leia matriz A(15,5). Verifique elementos repetidos e quantas vezes cada um aparece.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    const int R=15,C=5;
    int A[R][C];
    cout<<"Digite 75 inteiros para A[15][5]:\n";
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) cin>>A[i][j];
    vector<int> flat;
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) flat.push_back(A[i][j]);
    sort(flat.begin(), flat.end());
    cout<<"Valores repetidos e contagem:\n";
    for(size_t i=0;i<flat.size();){
        int val = flat[i];
        size_t k=i;
        while(k<flat.size() && flat[k]==val) k++;
        cout<<val<<" -> "<<(k-i)<<" vez(es)\n";
        i=k;
    }
    return 0;
}
