public class Jogo {
    private String dificuldade;

    Personagem p = new personagemConcreto();
    
    public Jogo() {
        //construtor vazio para permitir a criação de objetos sem parâmetros
    }
    
    public Jogo(String dificuldade) {
        this.dificuldade = dificuldade;
    }

    public class personagemConcreto extends Personagem {
        public personagemConcreto() {
            super();
        }
    }
}
