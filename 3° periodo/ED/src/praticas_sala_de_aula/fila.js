class Fila {
    constructor(capacidade = 10) {
        this.capacidade = capacidade;
        this.dados = [];
        this.inicio = 0;
        this.fim = 0;
        this.tamanho = 0;
    }

    // Inserir elemento (enqueue)
    enqueue(valor) {
        if (this.isFull()) {
            throw new Error("A fila está cheia");
        }

        this.dados[this.fim] = valor;
        this.fim = (this.fim + 1) % this.capacidade;
        this.tamanho++;
    }

    // Remover elemento (dequeue)
    dequeue() {
        if (this.isEmpty()) {
            throw new Error("A fila está vazia");
        }

        const valor = this.dados[this.inicio];
        this.inicio = (this.inicio + 1) % this.capacidade;
        this.tamanho--;

        return valor;
    }

    // Ver o primeiro elemento
    front() {
        if (this.isEmpty()) {
            throw new Error("A fila está vazia");
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
            resultado.push(this.dados[(this.inicio + i) % this.capacidade]);
        }
        console.log(resultado.join(" <- "));
    }
}

export default Fila;