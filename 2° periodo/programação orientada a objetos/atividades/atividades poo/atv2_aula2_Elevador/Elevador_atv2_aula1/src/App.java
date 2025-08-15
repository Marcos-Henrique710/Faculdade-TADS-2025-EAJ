import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Elevador novoElevador = new Elevador(10, 5); // 10 andares, capacidade para 5 pessoas

        int opcao;
        do {
            System.out.println("\n=== Sistema de Controle do Elevador ===");
            System.out.println("1. Entrar no elevador");
            System.out.println("2. Subir/Descer para um andar");
            System.out.println("3. Sair do elevador");
            System.out.println("4. Verificar status");
            System.out.println("5. Sair do programa");
            System.out.print("Digite a opção: ");
            opcao = scanner.nextInt();

            switch (opcao) {
                case 1:
                    novoElevador.entrar();
                    break;
                case 2:
                    System.out.print("Digite o andar desejado: ");
                    int andar = scanner.nextInt();
                    novoElevador.mover(andar);
                    break;
                case 3:
                    novoElevador.sair();
                    break;
                case 4:
                    novoElevador.status();
                    break;
                case 5:
                    System.out.println("Encerrando o programa...");
                    break;
                default:
                    System.out.println("Opção inválida.");
            }
        } while (opcao != 5);

        scanner.close();
    }
}
