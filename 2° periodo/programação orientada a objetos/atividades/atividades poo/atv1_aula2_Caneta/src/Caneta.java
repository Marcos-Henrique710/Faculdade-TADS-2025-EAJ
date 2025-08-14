public class Caneta {
    String modelo;
    String cor;
    float ponta;
    int carga;
    boolean tampada;

    public Caneta(String modelo, String cor, float ponta, int carga, boolean tampada) {
        this.modelo = modelo;
        this.cor = cor;
        this.ponta = ponta;
        this.carga = carga;
        this.tampada = tampada;
    }

    public void escrever(String texto) {
        if (!this.tampada) {
            System.out.println("Escrevendo: " + texto);
        } else {
            System.out.println("A caneta está tampada. Não é possível escrever.");
        }
    }

    public void tampar() {
        this.tampada = true;
        System.out.println("A caneta foi tampada.");
    }

    public void destampar() {
        this.tampada = false;
        System.out.println("A caneta foi destampada.");
    }

    public void status() {
        System.out.println("Modelo: " + this.modelo);
        System.out.println("Cor: " + this.cor);
        System.out.println("Ponta: " + this.ponta);
        System.out.println("Carga: " + this.carga);
        System.out.println("Tampada: " + (this.tampada ? "Sim" : "Não"));
    }

    public static void main(String[] args) {
        Caneta caneta = new Caneta("BIC", "Azul", 0.7f, 100, true);
        caneta.status();
        caneta.destampar();
        caneta.escrever("Olá, mundo!");
        caneta.tampar();
    }
}
