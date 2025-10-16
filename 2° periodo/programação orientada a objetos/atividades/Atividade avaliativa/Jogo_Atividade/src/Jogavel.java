public class Jogavel extends Personagem {
    private int nivel;
    
    public Jogavel() {
        //construtor vazio para permitir a criação de objetos sem parâmetros
    }
    
    public Jogavel(int nivel) {
        this.nivel = nivel;
    }

    public int getNivel() {
        return nivel;
    }

    public void setNivel(int nivel) {
        this.nivel += nivel;
    }
}
