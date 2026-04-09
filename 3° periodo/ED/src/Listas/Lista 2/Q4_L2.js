/*
QUESTÃO 4. Implemente uma função para intercalar filas, a função ao recebe as duas filas como
parâmetro e retorna uma fila com os elementos das duas filas intercalados
*/

class Fila {
    constructor() {
        this.itens = []; // criando a fila
    }

    // função para adicionar elemento na fila
    enqueue(x) {
        this.itens.push(x);
    }

    // função para remover elemento da fila
    dequeue() {
        return this.itens.shift();
    }

    // função para verificar se a fila está vazia
    isEmpty() {
        return this.itens.length === 0;
    }
}

// função para intercalar duas filas
function intercalarFilas(fila1, fila2) {
    const novaFila = new Fila(); // nova fila resultado

    // enquanto alguma das filas tiver elemento
    while (!fila1.isEmpty() || !fila2.isEmpty()) {

        if (!fila1.isEmpty()) {
            novaFila.enqueue(fila1.dequeue());
        }

        if (!fila2.isEmpty()) {
            novaFila.enqueue(fila2.dequeue());
        }
    }

    return novaFila;
}

// Testes
const f1 = new Fila();
const f2 = new Fila();

// adicionando elementos na fila 1
f1.enqueue(1);
f1.enqueue(3);
f1.enqueue(5);

// adicionando elementos na fila 2
f2.enqueue(2);
f2.enqueue(4);
f2.enqueue(6);

// intercalando
const resultado = intercalarFilas(f1, f2);

// exibindo resultado
console.log(resultado.itens); 
// esperado: [1, 2, 3, 4, 5, 6]