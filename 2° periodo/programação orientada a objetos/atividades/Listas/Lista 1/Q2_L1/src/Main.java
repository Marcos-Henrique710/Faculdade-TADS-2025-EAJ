public class Main {
    public static void main(String[] args) throws Exception {
        String [] strTests = {"Paulo Jose de Almeida Prado", "Maria das Flores", "Lima da Silva" };
        // etrada pode ser em qualquer fomato
        String [] strResults = {" ", " ", " "};
        for(int j =0; j < strTests[j].split(" ").length; j++){
            System.out.println("oloko");
        }
        for(int i = 0; i < strTests.length; i++){
            strResults[i] += strResults[i].charAt(0);
        }
        System.out.println("Hello, World!");
    }
}
