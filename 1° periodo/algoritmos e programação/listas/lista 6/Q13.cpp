/*
Lista 6 - Questão 13
13. tProduto (descricao, quantidade, precoUnitario, subTotal calculado). tNotaFiscal (numero, data, itens[5], total calculado). Vetor NotasFiscais 5 posicoes. Menu: relatorio, buscar por numero, exibir nota com maior valor, quantidade total de um produto por descricao, media do total das notas.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct tProduto{ string descricao; int quantidade; double precoUnitario; double subTotal; };
struct tNotaFiscal{ int numero; string data; tProduto itens[5]; double total; };
int main(){
    const int N=5;
    vector<tNotaFiscal> notas(N);
    for(int i=0;i<N;i++){
        cout<<"Nota "<<i+1<<" numero: "; cin>>notas[i].numero; cin.ignore();
        cout<<"Data: "; getline(cin, notas[i].data);
        notas[i].total=0;
        for(int k=0;k<5;k++){
            cout<<"Produto "<<k+1<<" descricao: "; getline(cin, notas[i].itens[k].descricao);
            cout<<"Quantidade: "; cin>>notas[i].itens[k].quantidade;
            cout<<"Preco unitario: "; cin>>notas[i].itens[k].precoUnitario; cin.ignore();
            notas[i].itens[k].subTotal = notas[i].itens[k].quantidade * notas[i].itens[k].precoUnitario;
            notas[i].total += notas[i].itens[k].subTotal;
        }
    }
    int opc=0;
    while(opc!=7){
        cout<<"\nMENU\n1-RELATORIO COMPLETO\n2-BUSCAR NOTA POR NUMERO\n3-NOTA MAIOR VALOR\n4-QUANTIDADE VENDIDA DE PRODUTO\n5-MEDIA DO TOTAL DAS NOTAS\n6-SAIR\nEscolha: "; cin>>opc; cin.ignore();
        if(opc==1){
            for(auto &nf: notas){
                cout<<"Nota "<<nf.numero<<" Data: "<<nf.data<<" Total: "<<nf.total<<"\n";
                for(int k=0;k<5;k++) cout<<" - "<<nf.itens[k].descricao<<" q="<<nf.itens[k].quantidade<<" sub="<<nf.itens[k].subTotal<<"\n";
            }
        } else if(opc==2){
            int num; cout<<"Numero: "; cin>>num; cin.ignore();
            bool found=false;
            for(auto &nf: notas) if(nf.numero==num){ found=true; cout<<"Nota "<<nf.numero<<" Data: "<<nf.data<<" Total: "<<nf.total<<"\n"; for(int k=0;k<5;k++) cout<<" - "<<nf.itens[k].descricao<<" q="<<nf.itens[k].quantidade<<"\n"; }
            if(!found) cout<<"Nota nao encontrada\n";
        } else if(opc==3){
            double maior=-1; int idx=-1;
            for(int i=0;i<N;i++) if(notas[i].total>maior){ maior=notas[i].total; idx=i; }
            if(idx!=-1) cout<<"Nota com maior total: "<<notas[idx].numero<<" Total: "<<notas[idx].total<<"\n";
        } else if(opc==4){
            string desc; cout<<"Descricao do produto: "; getline(cin, desc);
            int soma=0;
            for(auto &nf: notas) for(int k=0;k<5;k++) if(nf.itens[k].descricao==desc) soma += nf.itens[k].quantidade;
            cout<<"Quantidade total vendida de "<<desc<<": "<<soma<<"\n";
        } else if(opc==5){
            double soma=0;
            for(auto &nf: notas) soma += nf.total;
            cout<<"Media do total das notas: "<<(soma/N)<<"\n";
        } else if(opc==6) { break; }
    }
    return 0;
}
