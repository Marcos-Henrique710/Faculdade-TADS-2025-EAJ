import java.util.*;

public class App {
    public static void main(String[] args) throws Exception {
        ArrayList <String> Lista = new ArrayList <String>();
        Lista.add("verde");
        Lista.add("vermelho");
        Lista.add("amarelo"); 
        Lista.add("azul");
        Lista.add("rosa");
        
        
        System.out.println(Lista.size());
        System.out.println(Lista.toString());
        Lista.remove(2);
        System.out.println(Lista.toString());
        Collections.sort(Lista);
        System.out.println(Lista.toString());
        Collections.sort(Lista, Collections.reverseOrder());
        System.out.println(Lista.toString());
        
        alterar(Lista, 2, "branco");
        System.out.println(Lista.toString());
        System.out.println("Fim");
    }
    
    public static void alterar (ArrayList <String> ListaCores, int indice, String cor){
        ListaCores.set(indice, cor);
    }
    
}
