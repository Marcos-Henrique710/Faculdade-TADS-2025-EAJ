/* Seja a Distância entre cidades dada pela tabela abaixo: 
 
    Cidade 1 | Cidade 2 | Cidade 3 | Cidade 4 | Cidade 5
    -----------------------------------------------------
    0        | 15       | 30       | 5        | 12
    15       | 0        | 10       | 17       | 28
    30       | 10       | 0        | 3        | 11
    5        | 17       | 3        | 0        | 80
    12       | 28       | 11       | 80       | 0

Faça um programa que leia um percurso (sequência de cidades) e calcule a distância total percorrida.
Exemplo: Entrada: "1 4 3" -> Saída: "Percurso informado: 1 -> 4 -> 3. Distância total: 8 km"
*/

import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Matriz de distâncias
        int[][] distancias = {
            {0, 15, 30, 5, 12},   // Cidade 1
            {15, 0, 10, 17, 28},  // Cidade 2
            {30, 10, 0, 3, 11},   // Cidade 3
            {5, 17, 3, 0, 80},    // Cidade 4
            {12, 28, 11, 80, 0}   // Cidade 5
        };

        Scanner sc = new Scanner(System.in);

        // Entrada
        System.out.println("Digite o percurso (cidades separadas por espaco):");
        String[] entrada = sc.nextLine().split(" ");
        sc.close();

        int[] percurso = new int[entrada.length];
        for (int i = 0; i < entrada.length; i++) {
            percurso[i] = Integer.parseInt(entrada[i]);
        }

        // Processamento
        int distanciaTotal = 0;
        for (int i = 0; i < percurso.length - 1; i++) {
            int origem = percurso[i] - 1;   // ajustar índice (cidades começam em 1)
            int destino = percurso[i + 1] - 1;
            distanciaTotal += distancias[origem][destino];
        }

        // Saída
        System.out.print("Percurso informado: ");
        for (int cidade : percurso) {
            System.out.print(cidade + " ");
        }
        System.out.println("\nDistancia total percorrida: " + distanciaTotal + " km");
    }
}
