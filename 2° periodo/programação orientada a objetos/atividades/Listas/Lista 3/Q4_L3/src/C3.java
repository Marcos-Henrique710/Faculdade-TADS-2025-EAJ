/*e. Considere que a classe C3 implementa as interfaces I1 e I2; */
/*g. Considere que todas as classes devem ter pelo menos um método e um atributo 
próprios; */
public class C3 extends C1 implements I1, I2 {
    private double saldo;

    public C3() {
        super();
        this.saldo = 0.0;
    }

    public C3(String nome, double saldo) {
        super(nome);
        this.saldo = saldo;
    }

    // Sobrecarga de método
    public void depositar(double valor) {
        this.saldo += valor;
    }

    public void depositar(double valor, String origem) {
        this.saldo += valor;
        System.out.println("Deposito de " + valor + " realizado via " + origem);
    }

    // Implementações das interfaces
    @Override
    public void metodoI1() {
        System.out.println(nome + " executando metodo da interface I1.");
    }

    @Override
    public void metodoA() {
        System.out.println(nome + " executando metodoA de I2.");
    }

    @Override
    public void metodoB() {
        System.out.println(nome + " executando metodoB de I2.");
    }

    // Sobreposição de método abstrato
    @Override
    public void exibirInfo() {
        System.out.println("Classe C3 - Nome: " + nome + ", Saldo: " + saldo);
    }
}
