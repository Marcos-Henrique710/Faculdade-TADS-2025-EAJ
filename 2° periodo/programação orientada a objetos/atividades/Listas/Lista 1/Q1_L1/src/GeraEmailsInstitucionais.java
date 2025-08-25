/*
1. Crie uma classe GeraEmailsInstitucionais com o método main()
a. Leia (ou obtenha) o nome completo de 20 docentes da UFRN
(aleatoriamente). Dica: usar o dataset (fonte de dados) abertos de docentes
UFRN disponível em arquivo .CSV em: https://dados.ufrn.br/dataset/docentes,
no recurso
https://dados.ufrn.br/dataset/docentes/resource/6a8e5461-e748-45c6-aac6-43
2188d88dde (docentes.csv)
b. Gerar, para cada docente, seu e-mail institucional, totalmente em minúsculo,
da seguinte forma: primeironome.ultimonome@ufrn.br. Exemplo: Josenalde
Barbosa de Oliveira, o e-mail gerado será josenalde.oliveira@ufrn.br.
Sugestão usar o método split() das Strings. Caso haja e-mails gerados
duplicados (pessoas que diferem nos nomes do meio), tratar estes casos,
gerando o e-mail completo, exemplo: João Paulo Silva e João Pedro Silva:
joao.paulo.silva e joao.pedro.silva. Considere casos de teste que cubram
essas situações.
*/

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class GeraEmailsInstitucionais {
    public static void main(String[] args) throws FileNotFoundException {
        File docentesCsv = new File("docentes.csv");
        Scanner scanner = new Scanner(docentesCsv);

        List<String> nomes = new ArrayList<>();
        // Pula o cabeçalho, se houver
        if (scanner.hasNextLine()) scanner.nextLine();

       while (scanner.hasNextLine()) {
         String linha = scanner.nextLine();
        String[] colunas = linha.split(";");
        if (colunas.length > 1) {
            String nome = colunas[1].replace("\"", "").trim();
         nomes.add(nome);
        }
    }

        scanner.close();

        // Seleciona 20 nomes aleatórios
        Collections.shuffle(nomes);
        List<String> selecionados = nomes.subList(0, Math.min(20, nomes.size()));

        Set<String> emailsGerados = new HashSet<>();
        for (String nomeCompleto : selecionados) {
            String[] partes = nomeCompleto.toLowerCase().split("\\s+");
            String primeiro = partes[0];
            String ultimo = partes[partes.length - 1];
            String email = primeiro + "." + ultimo + "@ufrn.br";

            // Verifica duplicados
            if (emailsGerados.contains(email)) {
                // Vai adicionando nomes do meio progressivamente
                for (int i = 1; i < partes.length - 1 && emailsGerados.contains(email); i++) {
                    email = primeiro + "." + partes[i] + "." + ultimo + "@ufrn.br";
                }

                // Se ainda duplicado, adiciona número no final
                int contador = 1;
                String emailBase = email.substring(0, email.indexOf("@"));
                while (emailsGerados.contains(email)) {
                    email = emailBase + contador + "@ufrn.br";
                    contador++;
                }
            }

            emailsGerados.add(email);
            System.out.println("Nome: " + nomeCompleto + " -> Email: " + email);
        }
    }
}
