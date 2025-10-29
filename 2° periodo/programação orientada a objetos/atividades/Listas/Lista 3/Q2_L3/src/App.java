/*
2. Elabore um sistema no paradigma OO que implemente o problema de um robô andando 
em uma sala. Para tanto:  
a) Declare uma classe Robo contendo os atributos linha, coluna e passo, onde linha e coluna 
representam  a  posição  atual  do  robô  (coordenadas),  e  passo  representa  de quantos em 
quantos pontos o robô se locomove a cada vez. Implemente ainda os métodos (com seus 
respectivos  parâmetros  e  tipos  de  retorno):  mostrarPosicaoAtual,  andarFrente,  andarTras, 
andarDireita e andarEsquerda.  
b) Considere que a sala na qual o robô está tem tamanho 20x40, instancie 1 objeto Robô: R1 
(na posição 0,0) e mostre a sala (espaço vazio com robô – 1 – na posição atual) conforme 
ilustração a seguir:  
 
 
c)  Realize o deslocamento do robô de acordo com a escolha do usuário (1 - Andar para 
Frente, 2 - Andar para Trás, 3 - Andar para Direita, 4 - Andar para Esquerda). A cada escolha, 
o  sistema  deve  deslocar  o  robô  e  mostrar a sala novamente. Considere que o robô não 
poderá ultrapassar as fronteiras da sala. Caso isso esteja prestes a ocorrer, o robô deverá se 
deslocar até a posição imediatamente anterior à fronteira da sala. 
*/

import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int escolha; 
        
        Robo robo = new Robo(0, 0, 1);
        Sala sala = new Sala(40, 20);

        do {
            System.out.println("================== Robo na sala ==================");
            System.out.println("Sala de tamanho 20x40");
            System.out.println("Escolha para onde o robo vai andar:");
            System.out.println("1 - Andar para Frente");
            System.out.println("2 - Andar para Tras");
            System.out.println("3 - Andar para Direita");
            System.out.println("4 - Andar para Esquerda");
            System.out.println("5 - Sair\n");
            System.out.print("Digite sua escolha: ");

            escolha = scanner.nextInt(); 

            switch (escolha) {
                case 1:
                    System.out.println("Robo andou para frente");
                    robo.moverParaFrente();
                    sala.limparTela();
                    sala.desenhar();
                    robo.mostrarPosicaoAtual();
                    break;
                case 2:
                    System.out.println("Robo andou para tras");
                    robo.moverParaTras();
                    sala.limparTela();
                    sala.desenhar();
                    robo.mostrarPosicaoAtual();
                    break;
                case 3:
                    System.out.println("Robo andou para direita");
                    robo.moverParaDireita();
                    sala.limparTela();
                    sala.desenhar();
                    robo.mostrarPosicaoAtual();
                    break;
                case 4:
                    System.out.println("Robo andou para esquerda");
                    robo.moverParaEsquerda();
                    sala.limparTela();
                    sala.desenhar();
                    robo.mostrarPosicaoAtual();
                    break;
                case 5:
                System.out.print("\033[H\033[2J");
                    System.out.println("Saindo do programa...");
                    break;
                default:
                    System.out.println("Opcao invalida! Digite novamente\n");
            }

        } while (escolha != 5);

        scanner.close();
    }
}
