/*5.  Faça um programa que, a partir de um texto digitado pelo usuário, conte o número 
de   caracteres  total  e  o  número  de  palavras  (palavra  é  definida  por  qualquer 
sequência de  caracteres delimitada por espaços em branco) e exiba o resultado.
*/
import java.util.*;
public class Main {
    public static void main(String[] args) throws Exception {
        //dados de entrada
        Scanner scanner = new Scanner(System.in);
        System.out.println("Digite um texto: ");
        String texto = scanner.nextLine();
        scanner.close();

        //processamento e saída
        String palavras[] = texto.split(" ");
        int numCaracteres = texto.length();
        int numPalavras = palavras.length;
        
        System.out.println("Número de caracteres: " + numCaracteres);
        System.out.println("Número de palavras: " + numPalavras);
        
        System.out.println("Fim do programa");
    }
}
