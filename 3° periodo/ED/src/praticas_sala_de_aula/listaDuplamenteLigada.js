import noDuplo from "./noDuplo";

//Implementação de uma fila duplamente ligada
class filaDuplamenteLigada {
    constructor(dado) {
        this.head = null;
        this.tail = null;
    }

    //Verificar se a lista está vazia
    isEmpty() {
        this.head === null;
    }

    //Adicionar um elemento no início da lista
    add(dados) {
        let novoNo = new noDuplo();
        if(this.isEmpty()){
            this.head = novoNo;
            this.tail = novoNo;
        }else {
            novoNo.proximo = this.head;
            this.head.anterior = novoNo;
            this.head = novoNo;    
        }
    }

    //Adicionar um elemento no final da lista
    append(dados) {
        let novoNo = new noDuplo(dado);

        if(this.isEmpty()) {
            this.head = novoNo;
            this.tail = novoNo;
        }else{
            novoNo.anterior = this.tail;
            this.tail.proximo = novoNo;
            this.tail = novoNo;
        }
    }

    //Adicionar um elemento em uma posição específica da lista
    addAt(dado, pos) {
        let novoNo = new noDuplo(dado);

        if(pos === 0) {
            this.add(dado);
        }else {
            let aux = this.head;

            for(let i = 0; i < pos - 1; i++) {
                if(aux.proximo === null) {
                    throw new Error("Posição inválida");
                }
                aux = aux.proximo;
            }
            novoNo.proximo = aux.proximo;
            novoNo.anterior = aux;
            aux.proximo.anterior = novoNo;
            aux.proximo = novoNo;
        }
    }

    //Remover o primeiro elemento da lista
    removeFist() {
        if(this.isEmpty()){
            throw new Error ("Lista vazia");
        }else{
            let aux = this.head.proximo;

            aux.anterior = null;
            this.head.proximo = null;
            this.head = aux;
        }
    }

    //Remover o último elemento da lista
    removeLast() {
        if(this.isEmpty()){
            throw new Error("Lista vazia")
        }else {
            let aux = this.tail.anterior;
            
            aux.proximo = null;
            this.tail.anterior = null;
            this.tail = aux;
        }
    }

    //Remover um elemento em uma posição específica da lista
    removeAt(pos) {
        if(this.isEmpty()){
            throw new Error("Lista vazia");
        }else {
            let aux = this.head;
            for(let i = 0; i < pos - 1; i++) {
                if(aux.proximo === null) {
                    throw new Error("Posição inválida");
                }
                aux = aux.proximo;
            }
            aux.proximo = aux.proximo.proximo;
            aux.proximo.anterior = aux;
        }
    }

    //Buscar um elemento na lista
    search() {
        if(this.isEmpty()) {
            throw new Error("Lista vazia");
        }else {
            let aux = this.head;
            while(aux !== null) {
                if(aux.dado === dado) {
                    return true;
                }
                aux = aux.proximo;
            }
            return false;
        }
    }
}

export default listaDuplamenteLigada;