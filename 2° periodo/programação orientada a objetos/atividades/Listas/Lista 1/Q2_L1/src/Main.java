/* Crie uma classe que receba um nome completo na forma de uma String a partir do 
console e mostre a abreviatura deste nome em maiúsculas. Não se devem abreviar 
as palavras com 2 ou menos letras. A abreviatura deve vir separada por pontos. Ex: 
Paulo  Jose  de  Almeida  Prado.  Abreviatura:  P. J. de A. P. Lembre do parâmetro 
String  args[]  do  método  main().  Você  deve  testar  com  o  código  executado  no 
terminal. Exemplo: se seu código é Abrevia.java, será: java Abrevia “Paulo da Silva 
do Amaral”
 */

import java.util.Arrays;

class Main {
  public static void main(String[] args) {
    String [] testCases = {
      "Paulo Jose de Almeida Prado",
      "Pedro Guilherme da Silva Cunha",
      "Jaqueline Lima e Silva",
      "Joana dos Santos",
      "isis nicoly de souza"
    };
    
    String [] testCasesExpected = {
      "P. J. de A. P.",
      "P. G. da S. C.",
      "J. L. e S.",
      "J. dos S.",
      "I. N. de S."
    };

    String [] strAbbreviations = new String [testCases.length];
    Arrays.fill(strAbbreviations, "");

    int i = 0;
    boolean toAbbreviate;
    while (i < testCases.length) {
      for (int j = 0; j < testCases[i].split(" ").length; j++) {
        toAbbreviate = testCases[i].split(" ")[j].length() > 2 && !testCases[i].split(" ")[j].equals("dos") && !testCases[i].split(" ")[j].equals("das");
        if (toAbbreviate) {
          strAbbreviations[i] += testCases[i].split(" ")[j].toUpperCase().charAt(0) + ". "; 
        } else {
          strAbbreviations[i] += testCases[i].split(" ")[j] + " ";
        }
      }
      strAbbreviations[i] = strAbbreviations[i].trim();
      i++;
    }
    
    printArray(strAbbreviations);
    //imprimir resultado dos testes
    for (int p = 0; p < strAbbreviations.length; p++) {
      testAbbreviations(strAbbreviations[p], testCasesExpected[p]);
    }
    
  } 
 
  private static void printArray(String [] v) {
    System.out.println("------------------------");
    for (int i = 0; i < v.length; i++) {
      System.out.println(v[i]);
    }
    System.out.println("------------------------");
  }

  private static void testAbbreviations(String a, String b) {
    if (a.equals(b)) System.out.println("OK");
    else System.out.println("FAIL");
  }

}
