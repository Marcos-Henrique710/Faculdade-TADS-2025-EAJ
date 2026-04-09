/*
QUESTÃO 3. Implemente uma função que troca de lugar o elemento que está no topo da pilha
com o elemento que está na base da pilha. Usar apenas uma pilha como auxiliar.  
*/

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

    // Função para trocar o elemento do topo com o elemento da base da pilha
    trocaTopoBase() {
        if (this.size() <= 1) return;  // Se a pilha tiver 0 ou 1 elemento, não há troca a ser feita

        const auxiliar = new Pilha(); // Pilha auxiliar para armazenar os elementos temporariamente
        const topo = this.pop(); // Remove o elemento do topo da pilha

        while (this.size() > 1) {
            auxiliar.push(this.pop()); // Move os elementos para a pilha auxiliar até chegar na base
        }

        const base = this.pop(); // Remove o elemento da base da pilha
        this.push(topo); // Coloca o topo no lugar da base

        while (!auxiliar.isEmpty()) {
            this.push(auxiliar.pop()); // Move os elementos de volta para a pilha original
        }

        this.push(base); // Coloca a base no topo da pilha
    }
}