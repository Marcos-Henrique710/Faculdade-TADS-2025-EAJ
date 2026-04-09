/* QUESTÃO 1: (ENADE 2014, Adaptada) Uma estrutura de dados do tipo pilha pode ser usada
em um algoritmo que permite imprimir uma palavra de forma invertida. Por exemplo, ABACAXI
deve ser impresso IXACABA. Utilizando uma pilha e suas operações base, desenvolva a função
inverte que recebe uma String e, utilizando as funções push e pop da pilha, retorne a palavra de
forma invertida. */

class Pilha {
    constructor() {
        this.itens = [];
    }

    // Adiciona um elemento ao topo da pilha
    push(elemento) {
        this.itens.push(elemento);
    }

    // Remove e retorna o elemento do topo da pilha
    pop() {
        if (this.isEmpty()) {
            return null;
        }
        return this.itens.pop();
    }

    // Verifica se a pilha está vazia
    isEmpty() {
        return this.itens.length === 0;
    }

    // Retorna o número de elementos na pilha
    size() {
        return this.itens.length;
    }

    // Retorna o elemento do topo da pilha sem removê-lo
    peek() {
        if (this.isEmpty()) {
            return null;
        }
        return this.itens[this.itens.length - 1];
    }

    // Função para inverter uma palavra usando a pilha
    inverte(palavra) {
        const pilha = new Pilha();
        for (let i = 0; i < palavra.length; i++) {
            pilha.push(palavra[i]);
        }
        let resultado = "";
        while (!pilha.isEmpty()) {
            resultado += pilha.pop();
        }
        return resultado;
    }
}

let palavra = "";
console.log("Digite uma palavra:");

// Lê a entrada do usuário e inverte a palavra usando a função inverte da pilha
process.stdin.on("data", (data) => {
    palavra = data.toString().trim();
    const pilha = new Pilha();
    console.log("Palavra invertida:", pilha.inverte(palavra));
});