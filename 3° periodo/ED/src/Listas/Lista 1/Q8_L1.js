/*
QUESTÃO 8. Imagine que você tem um conjunto de pratos empilhados. No entanto, por
questões de organização, cada pilha só pode conter um número máximo capacidade de pratos.
Se uma pilha atingir essa capacidade, uma nova pilha é criada.
Implemente uma estrutura de dados PilhaDePratos que suporte as operações:
empilha(int x): Adiciona um prato à última pilha disponível ou cria uma nova pilha, se necessário.
desempilha(): Remove um prato da última pilha disponível e retorna seu valor. Se todas as pilhas
estiverem vazias, retorne None.

Entrada e Saída Esperadas:
PilhaDePratos(3) // Define a capacidade de cada pilha como 3
empilha(5)
empilha(10)
empilha(15)
empilha(20) // Nova pilha criada
desempilha() // Retorna 20
desempilha() // // Retorna 15 
*/

class Pilha {
    constructor(capacidade) {
        this.capacidade = capacidade;
        this.itens = []; // ✅ corrigido
    }

    // Adiciona um elemento ao topo da pilha
    push(elemento) {
        this.itens.push(elemento);
    }

    // Remove e retorna o elemento do topo da pilha
    pop() {
        if (this.isEmpty()) {
            return "Pilha vazia";
        }
        return this.itens.pop();
    }

    // Retorna o elemento do topo da pilha sem removê-lo
    peek() {
        if (this.isEmpty()) {
            return "Pilha vazia";
        }
        return this.itens[this.itens.length - 1];
    }

    // Verifica se a pilha está vazia
    isEmpty() {
        return this.itens.length === 0;
    }

    // Retorna o número de elementos na pilha
    size() {
        return this.itens.length;
    }

    // Verifica se a pilha está cheia
    estaCheia() {
        return this.itens.length === this.capacidade;
    }

    // Verifica se a pilha está vazia (alias)
    estaVazia() {
        return this.isEmpty();
    }
}

//classe para a pilha de pratos
class PilhaDePratos {
    constructor(capacidade) {
        this.capacidade = capacidade;
        this.pilhas = [];
    }

    // Adiciona um prato à última pilha disponível ou cria uma nova pilha, se necessário
    empilha(x) {
        // Verifica se a última pilha está cheia ou se não há pilhas
        if (this.pilhas.length === 0 || this.pilhas[this.pilhas.length - 1].estaCheia()) {
            const novaPilha = new Pilha(this.capacidade);
            novaPilha.push(x); // ✅ corrigido
            this.pilhas.push(novaPilha);
        } else {
            this.pilhas[this.pilhas.length - 1].push(x); // ✅ corrigido
        }
    }

    // Remove um prato da última pilha disponível e retorna seu valor. Se todas as pilhas estiverem vazias, retorne null
    desempilha() {
        if (this.pilhas.length === 0) {
            return null; // Todas as pilhas estão vazias
        }

        const prato = this.pilhas[this.pilhas.length - 1].pop(); // ✅ corrigido

        if (this.pilhas[this.pilhas.length - 1].estaVazia()) {
            this.pilhas.pop();  // Remove a pilha vazia da lista de pilhas
        }

        return prato;
    }
}

// Exemplo de uso
const pilhaDePratos = new PilhaDePratos(3);
pilhaDePratos.empilha(5);
pilhaDePratos.empilha(10);
pilhaDePratos.empilha(15);
pilhaDePratos.empilha(20); // Nova pilha criada
console.log(pilhaDePratos.desempilha()); // Retorna 20
console.log(pilhaDePratos.desempilha()); // Retorna 15
console.log(pilhaDePratos.desempilha()); // Retorna 10
console.log(pilhaDePratos.desempilha()); // Retorna 5
console.log(pilhaDePratos.desempilha()); // Retorna null (todas as pilhas estão vazias)