/*
Lista 6 - Questão 14
14. Controle de estacionamento: vetor de tVeiculo (placa, modelo, data, hora entrada, hora saida, valor). Menu com registrar entrada, registrar saída, listar ativos, informar quantidade por data, total arrecadado, sair.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct tVeiculo{ string placa; string modelo; string data; int horaEntrada; int horaSaida; double valor; bool ativo; };
int main(){
    vector<tVeiculo> vet;
    int opc=0; double arrecadado=0;
    while(opc!=6){
        cout<<"\n1-Registrar entrada\n2-Registrar saida\n3-Listar ativos\n4-Quant por data\n5-Total arrecadado\n6-Sair\nEscolha: "; cin>>opc; cin.ignore();
        if(opc==1){
            tVeiculo v; cout<<"Placa: "; getline(cin,v.placa);
            cout<<"Modelo: "; getline(cin,v.modelo);
            cout<<"Data (dd/mm/aaaa): "; getline(cin,v.data);
            cout<<"Hora entrada (inteira): "; cin>>v.horaEntrada; cin.ignore();
            v.horaSaida = 0; v.valor=0; v.ativo=true;
            vet.push_back(v);
        } else if(opc==2){
            string placa; cout<<"Placa: "; getline(cin, placa);
            int hora; cout<<"Hora saida: "; cin>>hora; cin.ignore();
            bool found=false;
            for(auto &v: vet) if(v.placa==placa && v.ativo){ v.horaSaida=hora; v.ativo=false;
                int diff = v.horaSaida - v.horaEntrada;
                if(diff<=0) v.valor = 0;
                else v.valor = diff * 5.0;
                arrecadado += v.valor;
                cout<<"Valor a pagar: "<<v.valor<<"\n";
                found=true; break;
            }
            if(!found) cout<<"Veiculo nao encontrado ativo\n";
        } else if(opc==3){
            cout<<"Veiculos ativos:\n";
            for(auto &v: vet) if(v.ativo) cout<<v.placa<<" - "<<v.modelo<<" - "<<v.data<<" - "<<v.horaEntrada<<"\n";
        } else if(opc==4){
            string data; cout<<"Data: "; getline(cin,data);
            int cnt=0;
            for(auto &v: vet) if(v.data==data) cnt++;
            cout<<"Quantidade na data "<<data<<": "<<cnt<<"\n";
        } else if(opc==5){
            cout<<"Total arrecadado: "<<arrecadado<<"\n";
        }
    }
    return 0;
}
