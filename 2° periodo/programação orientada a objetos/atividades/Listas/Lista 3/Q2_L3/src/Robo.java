/*
a) Declare uma classe Robo contendo os atributos linha, coluna e passo, onde linha e coluna 
representam  a  posição  atual  do  robô  (coordenadas),  e  passo  representa  de quantos em 
quantos pontos o robô se locomove a cada vez. Implemente ainda os métodos (com seus 
respectivos  parâmetros  e  tipos  de  retorno):  mostrarPosicaoAtual,  andarFrente,  andarTras, 
andarDireita e andarEsquerda.  
b) Considere que a sala na qual o robô está tem tamanho 20x40, instancie 1 objeto Robô: R1 
(na posição 0,0) e mostre a sala (espaço vazio com robô – 1 – na posição atual) conforme 
ilustração a seguir:
*/


public class Robo {
    private int linha;
    private int coluna;
    private int passo;

    public Robo(int linha, int coluna, int passo) {
        this.linha = linha;
        this.coluna = coluna;
        this.passo = passo;
    }

    public int getLinha() {
        return linha;
    }

    public void setLinha(int linha) {
        this.linha = linha;
    }

    public int getColuna() {
        return coluna;
    }

    public void setColuna(int coluna) {
        this.coluna = coluna;
    }

    public int getPasso() {
        return passo;
    }

    public void setPasso(int passo) {
        this.passo = passo;
    }

    public void mostrarPosicaoAtual() {
        System.out.println("A posicao atual eh: (" + linha + ", " + coluna + ")");
    }

    public void moverParaFrente(Sala sala) {
        linha -= passo;
        if (linha <= 0) { // verificar se bateu na parede de cima
            linha = 1;
            System.out.println("O robo bateu na parede e voltou");
        }
    }

    public void moverParaTras(Sala sala) {
        linha += passo;
        if (linha >= sala.getAltura() - 1) { // verificar se bateu na parede de baixo
            linha = sala.getAltura() - 2;
            System.out.println("O robo bateu na parede e voltou");
        }
    }

    public void moverParaEsquerda(Sala sala) {
        coluna -= passo;
        if (coluna <= 0) { // verificar se bateu na parede da esquerda
            coluna = 1;
            System.out.println("O robo bateu na parede e voltou");
        }
    }

    public void moverParaDireita(Sala sala) {
        coluna += passo;
        if (coluna >= sala.getLargura() - 1) { // verificar se bateu na parede da esquerda
            coluna = sala.getLargura() - 2;
            System.out.println("O robo bateu na parede e voltou");
        }
    }
}
