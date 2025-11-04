import java.util.*;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Bem vindo ao jogo!");
        System.out.println("Escolha a dificuldade: Fácil, Médio ou Difícil");

        Scanner sc = new Scanner(System.in);
        String dificuldade = sc.nextLine();

        System.out.println("Escolha o nome do seu personagem: ");

        Scanner scanner = new Scanner(System.in);
        String nomeJogador = scanner.nextLine();

        Jogo jogo = new Jogo(dificuldade);

        ArrayList<String> listadePersonagens = new ArrayList<>();

        listadePersonagens.add("player1");
        

        System.out.println("Iniciando o jogo...");
        sc.close();
    }
}
