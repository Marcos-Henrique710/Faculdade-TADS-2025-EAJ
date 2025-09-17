/*
4.  Escreva  um  programa  que  dado  um  valor  numérico  digitado  pelo  usuário 
(armazenado em   
uma variável inteira), imprima cada um dos seus dígitos por extenso.   
Exemplo:  ENTRADA: 4571, SAÍDA: quatro, cinco, sete, um
*/

import java.util.*;
public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        System.out.print("Digite um número inteiro: ");

        int num = sc.nextInt();
        String numsc = Integer.toString(num);
        sc.close();
        System.out.println("Numero por extenso:");
        
        for (int i = 0; i < numsc.length(); i++) {
            char digito = numsc.charAt(i);
            switch (digito) {
                case '0': {
                    System.out.println("zero");
                    break;
                }
                case '1': {
                    System.out.println("um");
                    break;
                }
                case '2': {
                    System.out.println("dois");
                    break;
                }
                case '3': {
                    System.out.println("tres");
                    break;
                }
                case '4': {
                    System.out.println("quatro");
                    break;
                }
                case '5': {
                    System.out.println("cinco");
                    break;
                }
                case '6': {
                    System.out.println("seis");
                    break;
                }
                case '7': {
                    System.out.println("sete");
                    break;
                }
                case '8': {
                    System.out.println("oito");
                    break;
                }
                case '9': {
                    System.out.println("nove");
                    break;
                }
            }
        }
        System.out.println("Fim");
    }
}
