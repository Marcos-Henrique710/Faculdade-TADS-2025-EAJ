/*g. Considere que todas as classes devem ter pelo menos um método e um atributo 
próprios; */
public class C2 extends C1 {
    protected int valor;

    public C2() {
        super();
        this.valor = 0;
    }

    public C2(String nome, int valor) {
        super(nome);
        this.valor = valor;
    }

    // Método próprio
    public void mostrarValor() {
        System.out.println(nome + " tem valor " + valor);
    }

    // Sobreposição de método abstrato
    @Override
    public void exibirInfo() {
        System.out.println("Classe C2 - Nome: " + nome + ", Valor: " + valor);
    }
}
