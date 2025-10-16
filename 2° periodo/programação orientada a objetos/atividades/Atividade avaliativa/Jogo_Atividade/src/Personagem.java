public abstract class Personagem extends Jogo {
    private String nome;
    private Integer vitalidade; 
    private Jogo jogo;
    
    public Personagem() {
        //construtor vazio para nao da erro
    }

    public Personagem(String nome, Integer vitalidade, Jogo jogo) {
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

    public void setVitalidade(Integer vitalidade) {
        this.vitalidade = 100;
    }

    public Integer aplicarGolpeNormal(Integer vitalidade) {
        this.vitalidade -= 10;
        return this.vitalidade;
    }
    
    public Jogo getJogo() {
        return jogo;
    }

    public Class verificarVitalidade() { )
    }
}
