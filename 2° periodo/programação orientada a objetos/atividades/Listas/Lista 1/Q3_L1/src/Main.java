/*
3. Faça um código no método main() da classe principal que, a partir de uma string
digitada pelo usuário, imprima:
a) O número de caracteres da string.
b) A string com todas suas letras em maiúsculo.
c) O número de vogais da string.
d) Se a string digitada começa com “UNI” (ignorando maiúsculas/minúsculas).
e) Se a string digitada termina com “RIO” (ignorando maiúsculas/minúsculas).
f) O número de dígitos (0 a 9) da string.
g) Se a string é um palíndromo ou não. 
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        System.out.println("Digite uma string: ");
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        scanner.close(); 

        // a) O número de caracteres da string.
        int numChars = input.length();
        System.out.println(numChars);

        // b) A string com todas suas letras em maiúsculo.
        String stringMaiuscula = input.toUpperCase();
        System.out.println(stringMaiuscula);
        
        // c) O número de vogais da string.
        int total = contaVogal(input);
        System.out.println("Quantidade de vogais: " + total);
        
        //d) Se a string digitada começa com "UNI" (ignorando maiúscula/minúsculas).
        if(input.startsWith("uni") || input.startsWith("UNI")) {
            System.out.println("A string comeca com uni/UNI");
        }else{
            System.out.println("A string nao comeca com uni/UNI");
        }
        
        //e) Se a string digitada termina com “RIO” (ignorando maiúsculas/minúsculas).
        boolean verificarString = input.toLowerCase().endsWith(input.toLowerCase());
        if(verificarString) {
            System.out.println("A string termina com RIO/rio");
        }else{
            System.out.println("A string nao termina com RIO/rio");
        }
        
        //f) O número de dígitos (0 a 9) da string.
        int total2 = contarDigitos(input);
        System.out.println("Quantidade de digitos(0 a 9) " + total2);
        
        //g) Se a string é um palíndromo ou não.
         if (checarPalindromo(input)) {
            System.out.println("A string eh um palindromo");
        } else {
            System.out.println("A string nao eh um palindromo");
        }
        
    }

    //d)
    public static int contaVogal(String input) {
        int contador = 0;
        input = input.toLowerCase();
        for (int i = 0; i < input.length(); i++) { 
            char ch = input.charAt(i);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                contador++;
            }
        }
        return contador;
    }
    
    //f)
    public static int contarDigitos(String input) {
        int contador = 0;
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if (Character.isDigit(ch)) {
                contador++;
            }
        }
        return contador;
    }
    
    //g)
    public static boolean checarPalindromo(String str) {
        String reversedString = new StringBuilder(str).reverse().toString();
        return str.equals(reversedString);
    }
}