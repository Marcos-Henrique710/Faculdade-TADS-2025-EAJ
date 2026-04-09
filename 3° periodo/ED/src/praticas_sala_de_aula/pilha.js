// A classe pilha é uma implementação de uma estrutura de dados do tipo pilha, que segue o princípio LIFO (Last In, First Out).
class pilha {
    constructor(capacidade = 10) {
        this.capacidade = capacidade;
        this.topo = 0;
        this.dados = [];
    }

    // O método push é responsável por adicionar um elemento no topo da pilha.
    push(valor){
        if (this.isFull()) 
            throw new Error ("A pilha está cheia");

        this.dados[this.topo] = valor;
        this.topo++;

        //simplificando fica "this.dados.push(valor);" colocando o valor no final da lista de dados e depois incrementando o topo,
        //mas, é melhor deixar na mão do programador a deixar na mão da linguagem decidir certas coisas.
    }

    // O método isEmpty é responsável por verificar se a pilha está vazia, ou seja, se o topo é igual a zero.
   isEmpty(){
        return this.topo === 0;
    }

    // O método pop é responsável por remover o elemento do topo da pilha e retornar seu valor.
    pop() {
        if (this.isEmpty())
            throw new Error ("A pilha está vazia, não é possível remover elementos");

        this.topo--;
        return this.dados[this.topo];
    }

    // O método peek é responsável por retornar o valor do elemento do topo da pilha sem removê-lo.
    peek() {
        if (this.isEmpty())
           throw new Error ("A pilha está vazia, não é possivel verificar o elemento do topo");

        return this.dados[this.topo - 1];
    }

    // O método length é responsável por retornar a quantidade de elementos presentes na pilha, ou seja, o valor do topo.
    length() {
        return this.topo;
    }

    // O método toString é responsável por retornar uma representação em string da pilha, mostrando os elementos do topo para a base.
    toString() {
        let resultado = "";
        for (let i = this.topo -1; i >= 0; i--) 
            resultado += this.dados[i] + " ";

        return resultado.trim();
    }

    // O método isFull é responsável por verificar se a pilha está cheia, ou seja, se a quantidade de elementos presentes na pilha é igual à capacidade máxima.
    isFull() {
        return this.length() === this.capacidade;
    }
}

export default pilha;