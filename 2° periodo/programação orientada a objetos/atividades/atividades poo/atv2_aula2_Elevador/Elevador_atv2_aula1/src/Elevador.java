public class Elevador {
    int andarAtual;
    int totalAndares;
    int capacidade;
    int pessoasPresentes;

    public Elevador(int totalAndares, int capacidade) {
        this.andarAtual = 0; // térreo
        this.totalAndares = totalAndares;
        this.capacidade = capacidade;
        this.pessoasPresentes = 0;
    }

    public void entrar() {
        if (pessoasPresentes < capacidade) {
            pessoasPresentes++;
            System.out.println("Uma pessoa entrou. Total de pessoas: " + pessoasPresentes);
        } else {
            System.out.println("Elevador cheio!");
        }
    }

    public void mover(int andarDestino) {
        if (andarDestino < 0 || andarDestino >= totalAndares) {
            System.out.println("Andar inválido!");
            return;
        }
        if (andarDestino == andarAtual) {
            System.out.println("Você já está no andar " + andarAtual);
            return;
        }

        System.out.println("Indo do andar " + andarAtual + " para o andar " + andarDestino + "...");
        while (andarAtual != andarDestino) {
            if (andarDestino > andarAtual) {
                andarAtual++;
                System.out.println("Subindo... Andar: " + andarAtual);
            } else {
                andarAtual--;
                System.out.println("Descendo... Andar: " + andarAtual);
            }
            try {
                Thread.sleep(1000); // simula o tempo
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
        System.out.println("Chegou no andar " + andarAtual);
    }

    public void sair() {
        if (pessoasPresentes > 0) {
            pessoasPresentes--;
            System.out.println("Uma pessoa saiu. Agora tem " + pessoasPresentes);
        } else {
            System.out.println("Elevador vazio.");
        }
    }

    public void status() {
        System.out.println("Andar atual: " + andarAtual);
        System.out.println("Total de andares: " + totalAndares);
        System.out.println("Capacidade: " + capacidade);
        System.out.println("Pessoas presentes: " + pessoasPresentes);
    }
}
