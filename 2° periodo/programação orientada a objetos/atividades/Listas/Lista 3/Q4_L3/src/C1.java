/*g. Considere que todas as classes devem ter pelo menos um método e um atributo 
próprios; */
public abstract class C1 {
    protected String nome;

    public C1() {
        this.nome = "Sem nome";
    }

    public C1(String nome) {
        this.nome = nome;
    }

    public abstract void exibirInfo();

    public String getNome() {
        return nome;
    }
}
