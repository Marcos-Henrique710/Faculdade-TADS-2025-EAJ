/*
QUESTÃO 6. Implemente uma função que dada uma fila, seja retornada a versão reversa dessa
fila. A função deve ser recursiva. 
*/

class Fila {
    constructor() {
        this.itens = []; // criando a fila
    }

    // função para adicionar na fila
    enqueue(x) {
        this.itens.push(x);
    }

    // função para remover da fila
    dequeue() {
        return this.itens.shift();
    }

    // função para verificar se está vazia
    isEmpty() {
        return this.itens.length === 0;
    }
}

// função recursiva para inverter a fila
function inverterFila(fila) {

    // caso base: fila vazia
    if (fila.isEmpty()) {
        return;
    }

    // remove o primeiro elemento
    let elemento = fila.dequeue();

    // chamada recursiva
    inverterFila(fila);

    // adiciona o elemento no final
    fila.enqueue(elemento);
}

// Testes
const fila = new Fila();

// adicionando elementos
fila.enqueue(1);
fila.enqueue(2);
fila.enqueue(3);
fila.enqueue(4);

console.log(fila.itens); 
// esperado: [1, 2, 3, 4]

// invertendo a fila
inverterFila(fila);

console.log(fila.itens); 
// esperado: [4, 3, 2, 1]