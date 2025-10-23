public class Atendente {
    private String nome;

    public Atendente(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void confirmarEntrega(Pedido pedido) {
        pedido.entregar();
        System.out.println("Atendente " + nome + " confirmou a entrega do pedido " + pedido.getCodigo());
    }
}
