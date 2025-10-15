public class Jogavel extends Personagem {
    private int nivel;

    public Jogavel(int nivel) {
        this.nivel = nivel;
    }

    public int getNivel() {
        return nivel;
    }

    public void setNivel(int nivel) {
        this.nivel += nivel;
    }

    public void aplicarGolpeEspecial() {
        System.out.println("Golpe especial aplicado!");
        
    }

    public void botaoA(Personagem personagem) {
        System.out.println("Golpe normal aplicado!");
        personagem.aplicarGolpeNormal(personagem);
    }

    public void botaoB() {
        aplicarGolpeEspecial();
    }
}
