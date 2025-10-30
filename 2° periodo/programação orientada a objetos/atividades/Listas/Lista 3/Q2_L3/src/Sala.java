public class Sala {
    private int largura;
    private int altura;
    private Robo robo;

    public Sala(int largura, int altura, Robo robo) {
        this.largura = largura;
        this.altura = altura;
        this.robo = robo;
    }

    public int getLargura() {
        return largura;
    }

    public int getAltura() {
        return altura;
    }

    public void limparTela() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }

    public void desenhar() {
        for (int i = 0; i < altura; i++) {
            for (int j = 0; j < largura; j++) {
                // paredes
                if (i == 0 || i == altura - 1 || j == 0 || j == largura - 1) {
                    System.out.print("#");
                }
                // robo
                else if (i == robo.getLinha() && j == robo.getColuna()) {
                    System.out.print("R");
                }
                // espaços vazios
                else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
