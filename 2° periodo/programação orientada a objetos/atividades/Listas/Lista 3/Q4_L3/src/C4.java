/*g. Considere que todas as classes devem ter pelo menos um método e um atributo 
próprios; */
public class C4 extends C2 {
    private String descricao;

    public C4() {
        super();
        this.descricao = "Sem descricao";
    }

    public C4(String nome, int valor, String descricao) {
        super(nome, valor);
        this.descricao = descricao;
    }

    @Override
    public void exibirInfo() {
        System.out.println("Classe C4 - Nome: " + nome + ", Valor: " + valor + ", Descricao: " + descricao);
    }

    public void mostrarDescricao() {
        System.out.println("Descricao de " + nome + ": " + descricao);
    }
}
