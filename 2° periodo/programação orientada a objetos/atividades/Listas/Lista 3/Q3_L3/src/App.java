/*
3. Desenvolva um Jogo de Dados (que utiliza 2 dados com 6 faces cada) no paradigma OO 
atendendo às seguintes regras de negócio: 
a) O jogo admite até 11 jogadores diferentes. Ler o user do jogador e o valor que deseja 
apostar  (entre  2  e  12).  Usernames  exatamente  iguais  (independentemente  de  serem 
maiúsculos, minúsculos ou qualquer combinação) não são permitidos. 
b) O jogo admite divisão do prêmio, portanto, é possível duplicidade de apostas no mesmo 
número 
c) O jogo possui dois dados, numerados de 1 a 6 cada. 
d) Os dados são então lançados e os números surgem randomicamente na face de cada 
dado. Estes valores são então somados e exibe-se na tela o número sorteado. 
e) O jogo verifica se alguém venceu ou se a “máquina” venceu! 
f) Se alguém vencer, terá seus dados registrados em arquivo ASCII com a indicação de uma 
vitória 
g) Se a mesma pessoa jogar novamente e ganhar, o registro é atualizado para incrementar as 
vitórias deste jogador 
h) Na primeira tela do jogo (ao carregar) deve ser possível ver o ranking (caso haja) do TOP 
FIVE, com o nome e número de vitórias de cada ganhador. E ao apertar alguma tecla passa 
para a “tela” de coletar dados dos jogadores. 
i) Considere modelar o problema em UML com classes Dado, Player, Game etc. 
*/

import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Jogo jogo = new Jogo();
        Scanner sc = new Scanner(System.in);

        // Mostra o ranking antes do jogo começar
        jogo.exibirRanking();

        System.out.println("Pressione ENTER para iniciar o jogo...");
        sc.nextLine();

        // Coleta de jogadores
        jogo.adicionarJogadores(sc);

        // Roda o jogo
        jogo.jogar();

        sc.close();
    }
}

