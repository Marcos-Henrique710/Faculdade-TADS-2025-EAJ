/*
Lista 6 - Questão 11
11. tAluno (nome, matricula). Cadastre 3 alunos. tDisciplina (matriculaDoAluno, disciplina, nota1, nota2, media calculada). Cadastre 12 disciplinas (4 por aluno). Menu com 5 opcoes (exibir dados, maior media, media das medias por aluno, alunos de disciplina, sair).
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct tAluno{ string nome; int matricula; };
struct tDisciplina{ int matriculaDoAluno; string disciplina; float nota1, nota2, media; };
int main(){
    vector<tAluno> alunos(3);
    for(int i=0;i<3;i++){
        cout<<"Aluno "<<i+1<<" - Nome: "; getline(cin, alunos[i].nome);
        cout<<"Matricula: "; cin>>alunos[i].matricula; cin.ignore();
    }
    vector<tDisciplina> disciplinas;
    disciplinas.reserve(12);
    for(int i=0;i<3;i++){
        cout<<"Cadastrando 4 disciplinas para aluno "<<alunos[i].nome<<" (matricula "<<alunos[i].matricula<<")\n";
        for(int k=0;k<4;k++){
            tDisciplina d; d.matriculaDoAluno = alunos[i].matricula;
            cout<<"Disciplina: "; getline(cin, d.disciplina);
            cout<<"Nota1: "; cin>>d.nota1; cout<<"Nota2: "; cin>>d.nota2; cin.ignore();
            d.media = (d.nota1 + d.nota2)/2.0;
            disciplinas.push_back(d);
        }
    }
    int opc=0;
    while(opc!=5){
        cout<<"\nMENU:\n1-EXIBIR DADOS ALUNO\n2-MAIOR MEDIA\n3-MEDIA DAS MEDIAS POR ALUNO\n4-ALUNOS DE UMA DISCIPLINA\n5-SAIR\nEscolha: "; cin>>opc; cin.ignore();
        if(opc==1){
            int mat; cout<<"Digite matricula: "; cin>>mat; cin.ignore();
            string nome="(nao encontrado)";
            for(auto &a: alunos) if(a.matricula==mat) nome=a.nome;
            cout<<"Aluno: "<<nome<<"\n";
            for(auto &d: disciplinas) if(d.matriculaDoAluno==mat) cout<<d.disciplina<<" - "<<d.media<<"\n";
        } else if(opc==2){
            float melhor=-1; string disc=""; string nome="";
            for(auto &d: disciplinas) if(d.media>melhor){ melhor=d.media; disc=d.disciplina;
                for(auto &a: alunos) if(a.matricula==d.matriculaDoAluno) nome=a.nome;
            }
            cout<<"Maior media: "<<melhor<<" Disciplina: "<<disc<<" Aluno: "<<nome<<"\n";
        } else if(opc==3){
            for(auto &a: alunos){
                float soma=0; int cnt=0;
                for(auto &d: disciplinas) if(d.matriculaDoAluno==a.matricula){ soma+=d.media; cnt++; }
                cout<<a.nome<<" - media das medias: "<<(cnt? (soma/cnt):0)<<"\n";
            }
        } else if(opc==4){
            string disc; cout<<"Disciplina: "; getline(cin, disc);
            cout<<"Alunos da disciplina "<<disc<<":\n";
            for(auto &d: disciplinas) if(d.disciplina==disc){
                for(auto &a: alunos) if(a.matricula==d.matriculaDoAluno) cout<<a.nome<<"\n";
            }
        }
    }
    return 0;
}
