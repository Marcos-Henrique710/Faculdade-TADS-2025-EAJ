public abstract class Personagem {
    private String nome;
    private Integer vitalidade = 100; 
    private Jogo jogo;

    public Personagem() {
        this.nome = nome;
        this.vitalidade = vitalidade;
        this.jogo = jogo;
    }

    public String getNome() {
        return nome;
    }

    public Integer getVitalidade() {
        return vitalidade;
    }
    
    //public void aplicarGolpeNormal(Personagem personagem);

    //public abstract void aplicarGolpeEspecial();
}
