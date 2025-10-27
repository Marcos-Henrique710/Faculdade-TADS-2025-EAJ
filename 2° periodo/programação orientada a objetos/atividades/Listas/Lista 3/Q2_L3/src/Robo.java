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
    private String linha;
    private String coluna;
    private String passo;

    public Robo(String linha, String coluna, String passo) {
        this.linha = linha;
        this.coluna = coluna;
        this.passo = passo;
    }
    
    public String getLinha() {
        return linha;
    }

    public void setLinha(String linha) {
        this.linha = linha;
    }

    public String getColuna() {
        return coluna;
    }

    public void setColuna(String coluna) {
        this.coluna = coluna;
    }

    public String getPasso() {
        return passo;
    }

    public void setPasso(String passo) {
        this.passo = passo;
    }
}
