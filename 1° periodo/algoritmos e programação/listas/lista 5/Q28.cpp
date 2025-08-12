/*
Lista 5 - Questão 28
28. Embaralhar S1 com S2: preencher indices pares de S3 com elementos de S1 e os impares com elementos de S2.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string s1, s2; cout<<"Digite S1 (use getline):\n"; getline(cin,s1);
    cout<<"Digite S2 (use getline):\n"; getline(cin,s2);
    string s3; s3.resize(s1.size()+s2.size());
    size_t i1=0,i2=0, k=0;
    while(k<s3.size()){
        if(k%2==0){ if(i1<s1.size()){ s3[k]=s1[i1++]; } else if(i2<s2.size()){ s3[k]=s2[i2++]; } else s3[k]='\0'; }
        else { if(i2<s2.size()){ s3[k]=s2[i2++]; } else if(i1<s1.size()){ s3[k]=s1[i1++]; } else s3[k]='\0'; }
        k++;
    }
    // append remaining if any
    while(i1<s1.size()) s3.push_back(s1[i1++]);
    while(i2<s2.size()) s3.push_back(s2[i2++]);
    cout<<"Resultado S3: "<<s3<<"\n";
    return 0;
}
