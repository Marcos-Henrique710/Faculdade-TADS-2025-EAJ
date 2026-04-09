/*
QUESTÃO 4. Implemente um conversor de números decimais para binários utilizando uma pilha.
*/

class Pilha {
    constructor() {
        this.dado = [];
    }

    // Adiciona um elemento ao topo da pilha
    push(item) {
        this.dado.push(item);
    }

    // Remove e retorna o elemento do topo da pilha
    pop() {
        return this.dado.pop();
    }

    // Verifica se a pilha está vazia
    isEmpty() {
        return this.dado.length === 0;
    }

    // Retorna o número de elementos na pilha
    size() {
        return this.dado.length;
    }

    // Retorna o elemento do topo da pilha sem removê-lo
    peek() {
        return this.dado[this.dado.length - 1];
    }

    // Função para converter um número decimal para binário usando a pilha
    decimalParaBinario(decimal) {
        if (decimal === 0) {
            return "0";
        }
        // Enquanto o número decimal for maior que 0, empilha o resto da divisão por 2 e divide o número por 2
        while (decimal > 0) {
            this.push(decimal % 2);
            decimal = Math.floor(decimal / 2);
        }
        let binario = ""; // Variável para armazenar o número binário resultante
        
        // Desempilha os elementos da pilha e concatena para formar o número binário
        while (!this.isEmpty()) {
            binario += this.pop(); // Concatena o elemento desempilhado ao resultado binário
        }
        return binario;
    }
}

let decimal = 0;
console.log("Digite um número decimal:"); 

// Lê a entrada do usuário e converte para um número inteiro para ser convertido para binário
process.stdin.on("data", (data) => {
    decimal = parseInt(data.toString().trim());
    console.log("Número binário:", new Pilha().decimalParaBinario(decimal));
});