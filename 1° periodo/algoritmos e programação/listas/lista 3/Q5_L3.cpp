/*
5. Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma, 
até que seja digitada uma média negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos 
aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar 
as matrículas de todos os alunos que obtiveram médias superiores a 9.  
*/
#include <iostream>
using namespace std;

int main() {
    int matricula, aprovados = 0, reprovados = 0, recuperacao = 0;
    float media;

    cout << "Digite a matricula e media (digite media negativa para encerrar):\n";
    while (true) {
        cout << "Matricula: ";
        cin >> matricula;
        cout << "Media: ";
        cin >> media;

        if (media < 0)
            break;

        if (media >= 7)
            aprovados++;
        else if (media < 3)
            reprovados++;
        else
            recuperacao++;

        if (media > 9)
            cout << "Aluno com media > 9: Matricula " << matricula << endl;
    }

    cout << "\nAprovados: " << aprovados << endl;
    cout << "Reprovados: " << reprovados << endl;
    cout << "Recuperacao: " << recuperacao << endl;

    return 0;
}
