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
        System.out.println("A posição atual é: (" + linha + ", " + coluna + ")");
    }

    public void moverParaFrente() {
        linha += passo;
        System.out.println("O robô andou para frente para linha " + linha);
    }

    public void moverParaTras() {
        linha -= passo;
        System.out.println("O robô andou para trás para linha " + linha);
    }

    public void moverParaEsquerda() {
        coluna -= passo;
        System.out.println("O robô andou para a esquerda para coluna " + coluna);
    }

    public void moverParaDireita() {
        coluna += passo;
        System.out.println("O robô andou para a direita para coluna " + coluna);
    }
}
