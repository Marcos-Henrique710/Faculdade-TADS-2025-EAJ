import java.io.*;
import java.util.*;

public class Jogo {
    private static final int MAX_JOGADORES = 11;
    private List<Jogadores> jogadores = new ArrayList<>();
    private Dados dado1 = new Dados();
    private Dados dado2 = new Dados();
    private Map<String, Integer> ranking = new HashMap<>();
    private final String arquivoRanking = "ranking.txt";

    public Jogo() {
        carregarRanking();
    }

    private void carregarRanking() {
        File file = new File(arquivoRanking);
        if (!file.exists()) return;

        try (BufferedReader br = new BufferedReader(new FileReader(file))) {
            String linha;
            while ((linha = br.readLine()) != null) {
                String[] partes = linha.split(";");
                if (partes.length == 2) {
                    ranking.put(partes[0], Integer.parseInt(partes[1]));
                }
            }
        } catch (IOException e) {
            System.out.println("Erro ao carregar ranking: " + e.getMessage());
        }
    }

    private void salvarRanking() {
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(arquivoRanking))) {
            for (Map.Entry<String, Integer> entry : ranking.entrySet()) {
                bw.write(entry.getKey() + ";" + entry.getValue());
                bw.newLine();
            }
        } catch (IOException e) {
            System.out.println("Erro ao salvar ranking: " + e.getMessage());
        }
    }

    public void exibirRanking() {
        System.out.println("=== TOP 5 RANKING ===");

        ranking.entrySet().stream()
                .sorted(Map.Entry.<String, Integer>comparingByValue().reversed())
                .limit(5)
                .forEach(entry ->
                        System.out.println(entry.getKey() + " - " + entry.getValue() + " vitoria(s)"));

        System.out.println("======================\n");
    }

    public void adicionarJogadores(Scanner sc) {
        System.out.print("Quantos jogadores irao jogar (até 11)? ");
        int qtd = sc.nextInt();
        sc.nextLine();

        if (qtd > MAX_JOGADORES) {
            System.out.println("Maximo permitido: 11 jogadores.");
            qtd = MAX_JOGADORES;
        }

        for (int i = 0; i < qtd; i++) {
            System.out.print("Nome do jogador #" + (i + 1) + ": ");
            String nome = sc.nextLine().trim();

            // impedir nomes repetidos (ignorando maiúsculas/minúsculas)
            boolean nomeExiste = jogadores.stream()
                    .anyMatch(p -> p.getUsername().equalsIgnoreCase(nome));

            if (nomeExiste) {
                System.out.println("Esse nome já foi escolhido! Tente outro.");
                i--;
                continue;
            }

            int aposta;
            while (true) {
                System.out.print("Digite sua aposta (entre 2 e 12): ");
                aposta = sc.nextInt();
                sc.nextLine();
                if (aposta >= 2 && aposta <= 12) break;
                System.out.println("Valor invalido! Deve ser entre 2 e 12.");
            }

            jogadores.add(new Jogadores(nome, aposta));
        }
    }

    public void jogar() {
        int valor1 = dado1.rolar();
        int valor2 = dado2.rolar();
        int soma = valor1 + valor2;

        System.out.println("\nDado 1: " + valor1);
        System.out.println("Dado 2: " + valor2);
        System.out.println("Soma: " + soma + "\n");

        List<Jogadores> vencedores = new ArrayList<>();

        for (Jogadores j : jogadores) {
            if (j.getAposta() == soma) {
                vencedores.add(j);
                ranking.put(j.getUsername(),
                        ranking.getOrDefault(j.getUsername(), 0) + 1);
            }
        }

        if (vencedores.isEmpty()) {
            System.out.println("Nenhum jogador venceu. A maquina ganhou!");
        } else {
            System.out.println("Vencedor(es):");
            for (Jogadores v : vencedores) {
                System.out.println(v.getUsername());
            }
        }

        salvarRanking();
    }
}
