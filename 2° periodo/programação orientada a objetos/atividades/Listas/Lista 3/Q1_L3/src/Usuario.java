/*
a) O USUÁRIO seleciona no menu a opção "Fazer pedido" e o sistema solicita e insere no 
novo pedido a data da compra, a hora da compra, endereço de entrega e a quantidade de 
botijões.  
*/

public class Usuario {
    private String nome;
    private String email;
    private String endereco;

    public Usuario(String nome, String email, String endereco) {
        this.nome = nome;
        this.email = email;
        this.endereco = endereco;
    }

    public String getNome() {
        return nome;
    }

    public String getEmail() {
        return email;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public void exibirInfo() {
        System.out.println("Usuário: " + nome);
        System.out.println("Email: " + email);
        System.out.println("Endereço: " + endereco);
    }
}

