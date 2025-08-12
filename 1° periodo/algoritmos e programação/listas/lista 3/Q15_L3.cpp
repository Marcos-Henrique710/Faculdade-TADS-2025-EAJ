/*
15. Uma loja tem, para cada um dos seus 10 funcionários, uma ficha contendo a identidade, o número de 
horas trabalhadas e a quantidade de dependentes do mesmo. Considerando que:  
a) A empresa paga 12 reais por hora e 40 reais por dependentes (salário bruto).  
b) Sobre o salário bruto são feitos descontos de 8,5% para o INSS e 5% para o IR (salário líquido). Elabore 
um algoritmo que leia os dados de todos os funcionários, calcule e escreva os salários bruto (total) e 
líquido (total – descontos) de cada funcionário e a identidade de todos os funcionários com mais de 3 
dependentes.  
*/
#include <iostream>
using namespace std;

int main() {
    int identidade, horas, dependentes;
    float bruto, liquido;
    float totalBruto = 0, totalLiquido = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Funcionario " << i << " - Identidade: ";
        cin >> identidade;
        cout << "Horas trabalhadas: ";
        cin >> horas;
        cout << "Numero de dependentes: ";
        cin >> dependentes;

        bruto = horas * 12 + dependentes * 40;
        liquido = bruto - (bruto * 0.085) - (bruto * 0.05);

        totalBruto += bruto;
        totalLiquido += liquido;

        cout << "Salario bruto: " << bruto << ", Salario liquido: " << liquido << endl;
        if (dependentes > 3)
            cout << "Funcionario " << identidade << " tem mais de 3 dependentes." << endl;
    }

    cout << "Total bruto: " << totalBruto << ", Total liquido: " << totalLiquido << endl;
    return 0;
}
