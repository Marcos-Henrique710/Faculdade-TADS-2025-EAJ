public abstract class Personagem {
    private String nome;
    private int vitalidade = 100; 
    private Jogo jogo;

    public Personagem() {
        this.nome = nome;
        this.vitalidade = vitalidade;
        this.jogo = jogo;
    }

    public String getNome() {
        return nome;
    }

    
    public void aplicarGolpeNormal(Personagem personagem) {
        vitalidade = vitalidade - 10;
    }

    public void aplicarGolpeEspecial(Personagem personagem) {

    }
}
