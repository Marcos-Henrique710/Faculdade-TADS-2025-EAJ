/*
Lista 5 - Questão 25
25. Leia string, verifique se eh palindromo (ignorando espacos e case).
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string s; cout<<"Digite a string (use getline):\n"; getline(cin,s);
    string t="";
    for(char c: s) if(isalnum((unsigned char)c)) t.push_back(tolower((unsigned char)c));
    string r = t; reverse(r.begin(), r.end());
    if(t==r) cout<<"E palindromo\n"; else cout<<"Nao e palindromo\n";
    return 0;
}
