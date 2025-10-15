import java.util.*;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Bem vindo ao jogo!");
        System.out.println("Escolha a dificuldade: Fácil, Médio ou Difícil");

        Scanner sc = new Scanner(System.in);

        String dificuldade = sc.nextLine();
        
        Jogo jogo = new Jogo(dificuldade);
        sc.close();

        System.out.println("Iniciando o jogo...");
        
        
    }
}
