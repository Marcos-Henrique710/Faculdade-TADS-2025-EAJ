/*
QUESTÃO 1: Implemente uma pilha usando a implementação de duas filas básicas.
*/

class Queue {
    constructor() {
        this.items = [];
    }

    // Adiciona um elemento ao final da fila
    enqueue(element) {
        this.items.push(element);
    }

    // Remove e retorna o elemento do início da fila
    dequeue() {
        return this.items.shift();
    }

    // Verifica se a fila está vazia
    isEmpty() {
        return this.items.length === 0;
    }

    // Retorna o número de elementos na fila
    size() {
        return this.items.length;
    }
    
    // Retorna o elemento do início da fila sem removê-lo
    peek() {
        return this.itens[0];
    }

    // Limpa a fila
    clear() {
        this.itens = [];
    }

    // Imprime os elementos da fila
    print() {
        console.log(this.itens);
    }
}

class Stack {
    constructor() {
        this.queue1 = new Queue();
        this.queue2 = new Queue();
    }

    // Adiciona um elemento ao topo da pilha
    push(element) {
        this.queue1.enqueue(element);
    }

    // Remove e retorna o elemento do topo da pilha
    pop() {
        if (this.queue1.isEmpty()) {
            return null;    // Pilha vazia
        }

        // Move todos os elementos, exceto o último, para a segunda fila
        while (this.queue1.size() > 1) {
            this.queue2.enqueue(this.queue1.dequeue());
        }

        // O último elemento da primeira fila é o topo da pilha
        const poppedElement = this.queue1.dequeue();
        [this.queue1, this.queue2] = [this.queue2, this.queue1];

        return poppedElement;
    }

    // Retorna o elemento do topo da pilha sem removê-lo
    peek() {
        if (this.queue1.isEmpty()) {
            return null;    // Pilha vazia
        }

        // Move todos os elementos, exceto o último, para a segunda fila
        while (this.queue1.size() > 1) {
            this.queue2.enqueue(this.queue1.dequeue());
        }

        // O último elemento da primeira fila é o topo da pilha
        const topElement = this.queue1.dequeue();
        this.queue2.enqueue(topElement);
        [this.queue1, this.queue2] = [this.queue2, this.queue1];

        return topElement;
    }

    // Verifica se a pilha está vazia
    isEmpty() {
        return this.queue1.isEmpty();
    }

    // Retorna o número de elementos na pilha
    size() {
        return this.queue1.size();
    }

    // Limpa a pilha
    clear() {
        this.queue1.clear();
        this.queue2.clear();
    }

    // Imprime os elementos da pilha
    print() {
        this.queue1.print();
    }

}

// Exemplo de uso
const stack = new Stack();
stack.push(1);
stack.push(2);
stack.push(3);
stack.print(); // Output: [1, 2, 3]
console.log(stack.pop()); // Output: 3
console.log(stack.peek()); // Output: 2
stack.print(); // Output: [1, 2]