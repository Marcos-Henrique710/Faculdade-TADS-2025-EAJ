/*
Lista 5 - Questão 23
23. Leia duas strings e informe se sao iguais ou diferentes sem usar strcmp.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string a,b; cout<<"Digite a primeira string (use getline):\n"; getline(cin,a);
    cout<<"Digite a segunda string (use getline):\n"; getline(cin,b);
    if(a.size()!=b.size()) cout<<"Diferentes\n";
    else{
        bool igual=true;
        for(size_t i=0;i<a.size();i++) if(a[i]!=b[i]){ igual=false; break; }
        cout<<(igual?"Iguais\n":"Diferentes\n");
    }
    return 0;
}
