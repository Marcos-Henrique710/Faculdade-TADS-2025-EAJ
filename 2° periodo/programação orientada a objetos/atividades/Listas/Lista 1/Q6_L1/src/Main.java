/*
6.  Um algoritmo genético é uma técnica de inteligência artificial que se inspira na forma 
como a   
natureza funciona e na teoria da evolução para resolver problemas complexos.  
A recombinação e a mutação são os operadores básicos de um algoritmo genético.   
Considerando que os indivíduos da população são codificados através de strings, o  
operador de recombinação recebe duas strings S1 e S2, sorteia aleatoriamente um 
ponto de corte P em S1 e S2. Em seguida, realiza a troca de informações genéticas 
de S1 e S2, de forma a gerar dois novos indivíduos filhos. A figura abaixo ilustra o 
processo de recombinação.   
 
O operador de mutação consiste em sortear aleatoriamente uma posição em um dos    
indivíduos filhos, e então modificar aleatoriamente o conteúdo daquela posição. A 
figura abaixo ilustra o processo de mutação.   
  
Construa um software em Java que implemente e utilize os métodos recombinacao e   
mutacao: 
   
A função recombinacao recebe como parâmetro 4 Strings (S1, S2, S3 e S4),  onde 
S1 e S2 são as Strings representado os indivíduos pais e S3 e S4 devem retornar os 
dois indivíduos filhos gerados com a recombinação de S1 e S2. Ambas as strings 
devem possuir o mesmo tamanho.   
 
A função mutacao recebe como parâmetro uma string S1 e modifica o conteúdo de 
S1 realizando o processo de mutação. A entrada deve ser duas strings S1 e S2 (de 
mesmo tamanho), fazer a recombinação dos dois indivíduos e aplicar uma mutação 
em um dos indivíduos resultantes. Por último, o programa deve exibir os 4 indivíduos 
da população (S1, S2, S3 e S4). Considere casos de teste que cubram cenários 
acima. Estes casos de testes podem estar no método main(), sem necessariamente 
solicitar ao usuário entradas.
*/

import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        // ===== Dados de entrada fixos =====
        String S1 = "ABCDEFG";
        String S2 = "HIJKLMN";

        // ===== Processamento =====
        String[] filhos = recombinacao(S1, S2);
        String S3 = mutacao(filhos[0]); // aplica mutação em um filho
        String S4 = filhos[1];

        // ===== Saída =====
        System.out.println("Individuo Pai 1: " + S1);
        System.out.println("Individuo Pai 2: " + S2);
        System.out.println("Individuo Filho 1 (com mutacao): " + S3);
        System.out.println("Individuo Filho 2: " + S4);
        System.out.println("Fim do programa");
    }

    // Método de recombinação
    public static String[] recombinacao(String s1, String s2) {
        Random rand = new Random();
        int pontoCorte = rand.nextInt(s1.length()); // sorteia ponto de corte

        String filho1 = s1.substring(0, pontoCorte) + s2.substring(pontoCorte);
        String filho2 = s2.substring(0, pontoCorte) + s1.substring(pontoCorte);

        return new String[]{filho1, filho2};
    }

    // Método de mutação
    public static String mutacao(String individuo) {
        Random rand = new Random();
        char[] genes = individuo.toCharArray();

        int pos = rand.nextInt(genes.length); // posição aleatória
        char novoGene;
        do {
            novoGene = (char) ('A' + rand.nextInt(26)); // gera A-Z
        } while (novoGene == genes[pos]);

        genes[pos] = novoGene;
        return new String(genes);
    }
}

