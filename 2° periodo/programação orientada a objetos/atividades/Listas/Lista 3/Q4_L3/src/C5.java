/*f. Considere que a classe C5 implementa a interface I1; */
/*g. Considere que todas as classes devem ter pelo menos um método e um atributo 
próprios; */
public class C5 extends C2 implements I1 {
    private boolean ativo;

    public C5() {
        super();
        this.ativo = false;
    }

    public C5(String nome, int valor, boolean ativo) {
        super(nome, valor);
        this.ativo = ativo;
    }

    @Override
    public void metodoI1() {
        System.out.println(nome + " executando metodo da interface I1 (implementado em C5).");
    }

    @Override
    public void exibirInfo() {
        System.out.println("Classe C5 - Nome: " + nome + ", Valor: " + valor + ", Ativo: " + ativo);
    }

    // Método próprio
    public void ativar() {
        this.ativo = true;
        System.out.println(nome + " agora esta ativo!");
    }
}
