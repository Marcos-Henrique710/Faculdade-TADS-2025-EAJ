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

import java.util.*;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("================= MENU BOTIJAO DE GAS =================");
        System.out.println("1 - Fazer pedido");
        System.out.println("2 - Confirmar entrega");
        System.out.println("3 - Ver pedidos confirmados");
        System.out.println("4 - Ver pedidos entregues");
        System.out.println("5 - Sair");
        System.out.println("=======================================================");

        Scanner scanner = new Scanner(System.in);
        int opcao;
        do {
            System.out.print("Digite a opcao desejada: ");
            opcao = scanner.nextInt();
            scanner.nextLine();
            scanner.close();

            switch (opcao) {
                case 1:
                    System.out.println("Fazer pedido selecionado.");
                    
                    break;
                case 2:
                    System.out.println("Confirmar entrega selecionado.");
                    break;
                case 3:
                    System.out.println("Ver pedidos confirmados selecionado.");
                    break;
                case 4:
                    System.out.println("Ver pedidos entregues selecionado.");
                    break;
                case 5:
                    System.out.println("Saindo do sistema. Obrigado!");
                    break;
                default:
                    System.out.println("Opcao invalida. Tente novamente.");
            }
        } while (opcao != 5);
    }
}
