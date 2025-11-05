/*
a) O jogo admite até 11 jogadores diferentes. Ler o user do jogador e o valor que deseja 
apostar  (entre  2  e  12).  Usernames  exatamente  iguais  (independentemente  de  serem 
maiúsculos, minúsculos ou qualquer combinação) não são permitidos. 
*/

public class Jogadores {
    private String username;
    private int aposta;
    private int vitorias;

    public Jogadores(String username, int aposta) {
        this.username = username;
        this.aposta = aposta;
        this.vitorias = 0;
    }

    public String getUsername() {
        return username;
    }

    public int getAposta() {
        return aposta;
    }

    public int getVitorias() {
        return vitorias;
    }

    public void adicionarVitoria() {
        vitorias++;
    }

    @Override
    public String toString() {
        return username + " - " + vitorias + " vitória(s)";
    }
}

