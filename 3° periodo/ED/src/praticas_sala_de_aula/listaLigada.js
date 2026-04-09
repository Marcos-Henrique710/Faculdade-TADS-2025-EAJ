class ListaLigada {
    constructor() {
        this.inicio = null;
        this.tamanho = 0;
    }

    // Inserir no final
    inserir(valor) {
        const novo = new No(valor);

        if (this.inicio === null) {
            this.inicio = novo;
        } else {
            let atual = this.inicio;

            while (atual.proximo !== null) {
                atual = atual.proximo;
            }

            atual.proximo = novo;
        }

        this.tamanho++;
    }

    // Remover valor
    remover(valor) {
        if (this.inicio === null) return;

        // Se for o primeiro
        if (this.inicio.valor === valor) {
            this.inicio = this.inicio.proximo;
            this.tamanho--;
            return;
        }

        let atual = this.inicio;

        while (atual.proximo !== null && atual.proximo.valor !== valor) {
            atual = atual.proximo;
        }

        if (atual.proximo !== null) {
            atual.proximo = atual.proximo.proximo;
            this.tamanho--;
        }
    }

    // Buscar valor
    buscar(valor) {
        let atual = this.inicio;

        while (atual !== null) {
            if (atual.valor === valor) {
                return true;
            }
            atual = atual.proximo;
        }

        return false;
    }

    // Mostrar lista
    imprimir() {
        let atual = this.inicio;
        let resultado = "";

        while (atual !== null) {
            resultado += atual.valor + " -> ";
            atual = atual.proximo;
        }

        resultado += "null";
        console.log(resultado);
    }
}

export default listaLigada;