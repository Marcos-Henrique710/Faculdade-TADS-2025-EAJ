public class App {
    public static void main(String[] args) {
        Caneta minhaCaneta = new Caneta("BIC", "Azul", 0.7f, 100, true);

        System.out.println("Modelo: " + minhaCaneta.modelo);
        System.out.println("Cor: " + minhaCaneta.cor);
        System.out.println("Ponta: " + minhaCaneta.ponta);
        System.out.println("Carga: " + minhaCaneta.carga);
        System.out.println("Tampada: " + (minhaCaneta.tampada ? "Sim" : "Não"));

        minhaCaneta.destampar();
        minhaCaneta.escrever("Olá, mundo!");
        minhaCaneta.tampar();
        minhaCaneta.status();
    }
}
