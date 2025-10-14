/*
a) O USUÁRIO seleciona no menu a opção "Fazer pedido" e o sistema solicita e insere no 
novo pedido a data da compra, a hora da compra, endereço de entrega e a quantidade de 
botijões.  
*/

public class Usuario {
    private String nome;
    private String endereco;
    private String telefone;
    
    public Usuario (String nome, String endereco, String telefone) {
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getTelefone(){
        return telefone;
    }

    public void setTelefone(String telefone){
        this.telefone = telefone;
    }
}
