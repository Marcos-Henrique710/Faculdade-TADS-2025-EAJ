/*
1.  Elabore  um  sistema  no  paradigma  OO  que  implemente  as  responsabilidades  de  uma 
empresa que entrega botijões de gás (suponha funcionar 24 horas).  
 
Crie a classe Pedido, sugerindo seus atributos e métodos. 
Implemente a classe Principal para um ArrayList de objetos pedido, onde seja possível testar 
os seguintes requisitos funcionais: 
  
a) O USUÁRIO seleciona no menu a opção "Fazer pedido" e o sistema solicita e insere no 
novo pedido a data da compra, a hora da compra, endereço de entrega e a quantidade de 
botijões.  
b) O sistema informa os dados do pedido ao usuário e solicita que ele os confirme ou altere, 
se for o caso. Em caso de alteração, permite alterar apenas o endereço de entrega, altera no 
pedido  e  o  exibe.  Em  caso  de  confirmação,  o  sistema  solicita  ao  usuário  que  digite  a 
quantidade de botijões que deseja e insere no pedido.  
c) O sistema calcula e insere no pedido o total da compra (pesquise o valor médio do preço 
do botijão na sua região para exibir ao usuário o preço unitário) e a hora de entrega para 2 
horas corridas após a hora da compra (verificar mudança de dia), insere no pedido e informa 
estes dados.  
d) O sistema solicita o número do cartão de crédito e o insere no pedido como forma de 
pagamento. Em seguida marca como "confirmado" o status do pedido e exibe o código do 
pedido (número sequencial gerado automaticamente).  
e) Quando o pedido é entregue, o atendente seleciona a opção do menu “Confirmar entrega” 
que busca o pedido pelo código e, se encontrado, altera o seu status para “entregue”. Se não 
for encontrado, o sistema informa “Pedido não localizado”.  
f)  A  qualquer  momento,  o  usuário  pode  selecionar  no  menu  as  opções  “Ver  pedidos 
confirmados” ou “Ver pedidos entregues” para consultar todos os pedidos em aberto ou os 
atendidos, respectivamente.  
*/

import java.util.ArrayList;
import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Pedido> pedidos = new ArrayList<>();

        double precoBotijao = 130.00;
        int opcao;

        do {
            System.out.println("\n===== MENU =====");
            System.out.println("1. Fazer pedido");
            System.out.println("2. Confirmar entrega");
            System.out.println("3. Ver pedidos confirmados");
            System.out.println("4. Ver pedidos entregues");
            System.out.println("0. Sair");
            System.out.print("Escolha: ");
            opcao = input.nextInt();
            input.nextLine();

            switch (opcao) {
                case 1: {
                    System.out.println("\n=== Fazer Pedido ===");
                    System.out.print("Endereço de entrega: ");
                    String endereco = input.nextLine();

                    System.out.print("Quantidade de botijões: ");
                    int quantidade = input.nextInt();
                    input.nextLine();

                    Pedido novo = new Pedido(endereco, quantidade, precoBotijao);
                    System.out.println("\nResumo do pedido:");
                    novo.exibirInfo();

                    System.out.print("Deseja alterar o endereço? (s/n): ");
                    String resp = input.nextLine();
                    if (resp.equalsIgnoreCase("s")) {
                        System.out.print("Novo endereço: ");
                        String novoEnd = input.nextLine();
                        novo.alterarEndereco(novoEnd);
                        System.out.println("Endereço atualizado!");
                        novo.exibirInfo();
                    }

                    System.out.print("Confirmar pedido? (s/n): ");
                    String confirmar = input.nextLine();
                    if (confirmar.equalsIgnoreCase("s")) {
                        System.out.print("Digite o numero do cartao de credito: ");
                        String cartao = input.nextLine();
                        novo.confirmarPedido(cartao);
                        pedidos.add(novo);
                        System.out.println("Pedido confirmado Codigo: " + novo.getCodigo());
                    } else {
                        System.out.println("Pedido cancelado.");
                    }
                }

                case 2: {
                    System.out.print("\nDigite o codigo do pedido para confirmar entrega: ");
                    int cod = input.nextInt();
                    boolean encontrado = false;

                    for (Pedido p : pedidos) {
                        if (p.getCodigo() == cod) {
                            p.entregar();
                            System.out.println("Pedido " + cod + " marcado como ENTREGUE!");
                            encontrado = true;
                            break;
                        }
                    }

                    if (!encontrado) {
                        System.out.println("Pedido nao localizado.");
                    }
                }

                case 3: {
                    System.out.println("\n=== Pedidos Confirmados ===");
                    for (Pedido p : pedidos) {
                        if (p.getStatus().equals("confirmado")) {
                            p.exibirInfo();
                        }
                    }
                }

                case 4: {
                    System.out.println("\n=== Pedidos Entregues ===");
                    for (Pedido p : pedidos) {
                        if (p.getStatus().equals("entregue")) {
                            p.exibirInfo();
                        }
                    }
                }

                case 0: System.out.println("Encerrando o sistema...");
                default: System.out.println("Opcao invalida!");
            }

        } while (opcao != 0);

        input.close();
    }
}
