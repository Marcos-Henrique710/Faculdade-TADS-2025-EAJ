/* QUESTÃO 2: Implemente uma fila usando a implementação duas pilhas básicas */

class FilaComPilha {
    constructor() {
        this.pilha1 = []; //criando a pilha 1
        this.pilha2 = []; //criado a pilha 2
    }

    //função para enfileirar a fila
    enqueue(x) {
        this.pilha1.push(x);
    }

    //função para desinfileirar a fila e colocar os itens da pilha 1 na pilha 2
    dequeue() {
        if(this.pilha2.length === 0) {
            while(this.pilha1.length > 0){
                this.pilha2.push(this.pilha1.pop());
            }
        }
        return this.pilha2.pop();
    }
}

// Testes da FilaComPilha
const fila = new FilaComPilha();

// Enfileirando elementos
fila.enqueue(1);
fila.enqueue(2);
fila.enqueue(3);

console.log(fila.dequeue()); // esperado: 1
console.log(fila.dequeue()); // esperado: 2

// Adicionando mais elementos
fila.enqueue(4);
fila.enqueue(5);

console.log(fila.dequeue()); // esperado: 3
console.log(fila.dequeue()); // esperado: 4
console.log(fila.dequeue()); // esperado: 5

// Tentando remover de fila vazia
console.log(fila.dequeue()); // esperado: undefined