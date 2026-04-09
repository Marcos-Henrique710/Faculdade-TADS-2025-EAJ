class FilaPrioridade {
    constructor() {
        this.size = 0;
        this.dados = [];
        this.dados[0] = new NoPrioridade(undefined, 99999999999);
    }

    add(dado) {
        let novoNo = new NoPrioridade(dados, prioridade);
        this.size = this.size + 1;
        this.dados(this.size) = novoNo;

        let pai = this.size / 2;
         
    }

    remove() {

    }
}