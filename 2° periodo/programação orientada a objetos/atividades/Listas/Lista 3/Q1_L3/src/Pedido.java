import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

public class Pedido {
    private static int contadorPedidos = 1; 

    private int codigo;
    private LocalDate dataCompra;
    private LocalTime horaCompra;
    private LocalTime horaEntrega;
    private String enderecoEntrega;
    private int quantidade;
    private double precoUnitario;
    private double total;
    private String cartaoCredito;
    private String status; 

    
    public Pedido(String enderecoEntrega, int quantidade, double precoUnitario) {
        this.codigo = contadorPedidos++;
        this.dataCompra = LocalDate.now();
        this.horaCompra = LocalTime.now();
        this.enderecoEntrega = enderecoEntrega;
        this.quantidade = quantidade;
        this.precoUnitario = precoUnitario;
        this.total = quantidade * precoUnitario;
        this.status = "em andamento";
        calcularHoraEntrega();
    }

    private void calcularHoraEntrega() {
        LocalDateTime compra = LocalDateTime.of(dataCompra, horaCompra);
        LocalDateTime entrega = compra.plusHours(2);
        this.horaEntrega = entrega.toLocalTime();
        if (!entrega.toLocalDate().equals(dataCompra)) {
            System.out.println("Entrega no dia seguinte (" + entrega.toLocalDate() + ")");
        }
    }

    public void confirmarPedido(String cartaoCredito) {
        this.cartaoCredito = cartaoCredito;
        this.status = "confirmado";
    }

    public void entregar() {
        this.status = "entregue";
    }

    public void alterarEndereco(String novoEndereco) {
        this.enderecoEntrega = novoEndereco;
    }

    public String getStatus() {
        return status;
    }

    public int getCodigo() {
        return codigo;
    }

    public void exibirInfo() {
        DateTimeFormatter horaFormat = DateTimeFormatter.ofPattern("HH:mm");
        System.out.println("=== Pedido " + codigo + " ===");
        System.out.println("Data da compra: " + dataCompra);
        System.out.println("Hora da compra: " + horaCompra.format(horaFormat));
        System.out.println("Endereço: " + enderecoEntrega);
        System.out.println("Quantidade: " + quantidade);
        System.out.println("Preço unitário: R$ " + precoUnitario);
        System.out.println("Total: R$ " + total);
        System.out.println("Hora prevista de entrega: " + horaEntrega.format(horaFormat));
        System.out.println("Status: " + status);
        System.out.println("-----------------------------");
    }
}
