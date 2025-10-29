public class Sala{
    private int largura;
    private int altura;

    public Sala(int largura, int altura) {
        this.largura = largura;
        this.altura = altura;
    }

    public void desenhar() {
        for (int y = 0; y < altura; y++) {
            for (int x = 0; x < largura; x++) {
                if (y == 0 || y == altura - 1) {
                    System.out.print("-"); // bordas superior/inferior
                } else if (x == 0 || x == largura - 1) {
                    System.out.print("|"); // laterais
                } else {
                    System.out.print(" "); // espaço vazio dentro
                }
            }
            System.out.println();
        }
    }

    // Limpa a tela (opcional)
    public void limparTela() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }
}

