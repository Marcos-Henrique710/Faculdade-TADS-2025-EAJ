// Fila Circular (Circular Queue)
class FilaCircular {
    constructor(capacidade = 5) {
        this.capacidade = capacidade;
        this.dados = new Array(capacidade);
        this.inicio = 0;
        this.fim = 0;
        this.tamanho = 0;
    }

    // Inserir (enqueue)
    enqueue(valor) {
        if (this.isFull()) {
            throw new Error("Fila cheia");
        }

        this.dados[this.fim] = valor;
        this.fim = (this.fim + 1) % this.capacidade;
        this.tamanho++;
    }

    // Remover (dequeue)
    dequeue() {
        if (this.isEmpty()) {
            throw new Error("Fila vazia");
        }

        let valor = this.dados[this.inicio];
        this.inicio = (this.inicio + 1) % this.capacidade;
        this.tamanho--;

        return valor;
    }

    // Primeiro elemento
    front() {
        if (this.isEmpty()) {
            throw new Error("Fila vazia");
        }

        return this.dados[this.inicio];
    }

    // Verifica se está vazia
    isEmpty() {
        return this.tamanho === 0;
    }

    // Verifica se está cheia
    isFull() {
        return this.tamanho === this.capacidade;
    }

    // Mostrar fila
    print() {
        let resultado = [];

        for (let i = 0; i < this.tamanho; i++) {
            let index = (this.inicio + i) % this.capacidade;
            resultado.push(this.dados[index]);
        }

        console.log(resultado.join(" <- "));
    }
}

export default filaCircular;