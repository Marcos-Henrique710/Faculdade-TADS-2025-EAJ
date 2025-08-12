/*
Lista 5 - Questão 18
18. Leia duas strings A e B e junte-as em uma unica string C.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string A,B;
    cout<<"Digite a primeira string (use getline):\n"; getline(cin,A);
    cout<<"Digite a segunda string (use getline):\n"; getline(cin,B);
    string C = A + (A.size()?" ":"") + B;
    cout<<"Resultado: "<<C<<"\n";
    return 0;
}
