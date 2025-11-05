/* 
4. Elaborar um programa OO que:  
a. Implemente uma classe abstrata C1;  
b. Implemente duas classes concretas C2 e C3, ambas herdando de C1;  
c. Implemente duas classes concretas C4 e C5, ambas herdando de C2;  
d. Implemente duas interfaces, I1 (com 1 método, no mínimo) e I2 (com dois métodos, 
no mínimo);  
e. Considere que a classe C3 implementa as interfaces I1 e I2;  
f. Considere que a classe C5 implementa a interface I1;  
g. Considere que todas as classes devem ter pelo menos um método e um atributo 
próprios;  
h. Demonstre no exercício:  
i. Sobrecarga de construtores;  
ii. Sobrecarga de métodos;  
iii. Sobreposição de métodos.  
 
i. Implemente a classe Principal, para testar todos os métodos das demais classes, 
contendo pelo menos um objeto de cada classe concreta. 
*/

public class App {
    public static void main(String[] args) {

        // C2
        C2 objC2 = new C2("ObjetoC2", 10);
        objC2.exibirInfo();
        objC2.mostrarValor();

        // C3 (interfaces, sobrecarga e sobreposição)
        C3 objC3 = new C3("ContaC3", 150.0);
        objC3.exibirInfo();
        objC3.depositar(50.0);
        objC3.depositar(100.0, "PIX");
        objC3.metodoI1();
        objC3.metodoA();
        objC3.metodoB();

        // C4
        C4 objC4 = new C4("ProdutoC4", 25, "Produto de teste");
        objC4.exibirInfo();
        objC4.mostrarDescricao();

        // C5 (implementa I1)
        C5 objC5 = new C5("UsuarioC5", 99, false);
        objC5.exibirInfo();
        objC5.metodoI1();
        objC5.ativar();

        System.out.println("\nTeste concluido com sucesso!");
    }
}
