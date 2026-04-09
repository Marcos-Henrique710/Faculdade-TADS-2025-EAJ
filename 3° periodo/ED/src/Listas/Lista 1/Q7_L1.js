/*
QUESTÃO 7. Dada uma pilha contendo números inteiros, implemente uma função que remova
todos os elementos duplicados, mantendo apenas a primeira ocorrência de cada número (mais
próxima do topo). A solução deve preservar a ordem relativa dos elementos originais.
Entrada:

Uma lista de números representando a pilha (o último elemento da lista representa o topo).

Saída:
Uma lista representando a pilha resultante após a remoção de duplicatas.

Exemplo:
Entrada: [3, 7, 3, 2, 7, 1, 4, 2]
Saída: [3, 7, 2, 1, 4]
*/

class pilha {
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

    // Função para remover elementos duplicados da pilha
    removeDuplicados() {
        const pilhaAuxiliar = new pilha();
        const elementosVistos = new Set();

        // Processa a pilha original e mantém apenas a primeira ocorrência de cada elemento
        while (!this.isEmpty()) {
            const elemento = this.pop();
            if (!elementosVistos.has(elemento)) {
                elementosVistos.add(elemento);
                pilhaAuxiliar.push(elemento);
            }
        }

        // Restaura os elementos únicos de volta para a pilha original
        while (!pilhaAuxiliar.isEmpty()) {
            this.push(pilhaAuxiliar.pop());
        }
    }
}

// Exemplo de uso
const minhaPilha = new pilha();

// Adiciona os elementos à pilha
[3, 7, 3, 2, 7, 1, 4, 2].forEach(num => minhaPilha.push(num));
minhaPilha.removeDuplicados(); // Remove os elementos duplicados da pilha
const resultado = [];

// Popula o resultado com os elementos da pilha após a remoção de duplicados
while (!minhaPilha.isEmpty()) {
    resultado.push(minhaPilha.pop());
}

console.log(resultado.reverse()); // Saída: [3, 7, 2, 1, 4]