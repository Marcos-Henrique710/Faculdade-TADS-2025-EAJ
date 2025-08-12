/*
Lista 5 - Questão 3
3. Leia matriz M(5,5) e calcule somas: linha 4, coluna 2, diagonal principal, diagonal secundária, e soma de todos elementos.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    const int N=5;
    int M[N][N];
    cout<<"Digite 25 inteiros para matriz 5x5:\n";
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>M[i][j];
    int somaLinha4=0, somaCol2=0, diagP=0, diagS=0, total=0;
    int linha4 = 3; // index 3 => linha 4 (1-based)
    int col2 = 1; // index 1 => coluna 2
    for(int i=0;i<N;i++){
        somaLinha4 += M[linha4][i];
        somaCol2 += M[i][col2];
        diagP += M[i][i];
        diagS += M[i][N-1-i];
        for(int j=0;j<N;j++) total += M[i][j];
    }
    cout<<"Matriz:\n"; for(int i=0;i<N;i++){ for(int j=0;j<N;j++) cout<<M[i][j]<<" "; cout<<"\n"; }
    cout<<"Soma da linha 4: "<<somaLinha4<<"\n";
    cout<<"Soma da coluna 2: "<<somaCol2<<"\n";
    cout<<"Soma da diagonal principal: "<<diagP<<"\n";
    cout<<"Soma da diagonal secundaria: "<<diagS<<"\n";
    cout<<"Soma de todos os elementos: "<<total<<"\n";
    return 0;
}
