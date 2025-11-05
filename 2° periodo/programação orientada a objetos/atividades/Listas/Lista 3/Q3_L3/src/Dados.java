import java.util.Random;

public class Dados {
    private Random random;

    public Dados() {
        random = new Random();
    }

    public int rolar() {
        return random.nextInt(6) + 1; // número entre 1 e 6
    }
}
