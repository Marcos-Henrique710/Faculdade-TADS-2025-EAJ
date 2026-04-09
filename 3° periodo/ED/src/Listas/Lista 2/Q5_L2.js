/*
QUESTÃO 5: Uma fila duplamente terminada (abreviada como Deque, do inglês double ended
queue) é um tipo de dado abstrato que generaliza uma fila, para a qual os elementos podem ser
adicionados ou removidos da frente (cabeça) ou de trás (cauda). Sobre o Deque realize as
seguintes implementações utilizando a linguagem de programação Javascript.
i. Implemente a função para instanciar e inicializar um Deque. (0,5)
ii. Implemente a função de inserir no início de um Deque. (0,5)
iii. Implemente a função de remover do início de um Deque. (0,5)
iv. Implemente a função de inserir no fim de um Deque. (0,5)
v. Implemente a função de remover do fim de um Deque. (0,5) 
*/

class Deque {
    constructor() {
        this.itens = []; // inicializando o deque
    }

    // função para inserir no início do deque
    inserirInicio(x) {
        this.itens.unshift(x);
    }

    // função para remover do início do deque
    removerInicio() {
        return this.itens.shift();
    }

    // função para inserir no fim do deque
    inserirFim(x) {
        this.itens.push(x);
    }

    // função para remover do fim do deque
    removerFim() {
        return this.itens.pop();
    }
}

// Testes
const deque = new Deque();

// inserindo no fim
deque.inserirFim(1);
deque.inserirFim(2);

// inserindo no início
deque.inserirInicio(0);

console.log(deque.itens); 
// esperado: [0, 1, 2]

// removendo do início
console.log(deque.removerInicio()); 
// esperado: 0

// removendo do fim
console.log(deque.removerFim()); 
// esperado: 2

console.log(deque.itens); 
// esperado: [1]