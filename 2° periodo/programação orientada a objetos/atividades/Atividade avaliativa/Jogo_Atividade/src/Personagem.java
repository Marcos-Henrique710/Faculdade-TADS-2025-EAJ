public abstract class Personagem extends Jogo {
    private String nome;
    private int vitalidade; 
    private Jogo jogo;
    
    public Personagem() {
        //construtor vazio para nao da erro
    }

    public Personagem(String nome, int vitalidade, Jogo jogo) {
        this.nome = nome;
        this.vitalidade = vitalidade;
        this.jogo = jogo;
    }

    public String getNome() {
        return nome;
    }

    public int getVitalidade() {
        return vitalidade;
    }

    public void setVitalidade(Integer vitalidade) {
        this.vitalidade = 100;
    }

    public int aplicarGolpeNormal(Integer vitalidade) {
        this.vitalidade -= 10;
        return this.vitalidade;
    }
    
    public Jogo getJogo() {
        return jogo;
    }

    public void vitalidadezero() {
        if (this.vitalidade <= 0) {
            System.out.println("Fim de jogo");
            System.exit(0);
        }else {
            System.out.println("Vitalidade restante: " + this.vitalidade);
        }
    }

}
