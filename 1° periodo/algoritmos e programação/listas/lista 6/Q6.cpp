/*
Lista 6 - Questão 6
6. Empresa: 200 funcionarios (nome, horas, dependentes). Paga 12 reais/h, 40 por dependente. Descontos: INSS 8.5%, IR 5%. Ler enquanto desejar (max200) e mostrar salario bruto, descontos e salario liquido.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Func{ string nome; int horas; int dependentes; };
int main(){
    const int MAX=200;
    vector<Func> v;
    char opc='S';
    while(opc=='S' && (int)v.size()<MAX){
        Func f; cout<<"Nome: "; getline(cin,f.nome);
        cout<<"Horas trabalhadas: "; cin>>f.horas;
        cout<<"Dependentes: "; cin>>f.dependentes; cin.ignore();
        v.push_back(f);
        cout<<"Novo funcionario (S/N)? "; cin>>opc; cin.ignore(); opc=toupper(opc);
    }
    cout<<"\nFolha de pagamento:\n";
    for(auto &f: v){
        double bruto = f.horas * 12.0 + f.dependentes * 40.0;
        double inss = bruto * 0.085;
        double ir = bruto * 0.05;
        double liquido = bruto - inss - ir;
        cout<<f.nome<<" | Bruto: "<<bruto<<" | INSS: "<<inss<<" | IR: "<<ir<<" | Liquido: "<<liquido<<"\n";
    }
    return 0;
}
