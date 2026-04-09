/*
QUESTÃO 3: (ENADE 2017, Adaptada) Uma empresa trabalha na produção de concreto e
terceiriza o serviço de transporte do produto. Os caminhoneiros telefonam para a empresa e
registram seu interesse pelo trabalho. Todas as manhãs, os caminhoneiros estacionam no pátio
da empresa e aguardam sua vez. O atendimento segue o critério de ordem de chegada. Esse
processo é, atualmente, controlado pela secretária, que utiliza sua agenda para gerenciar os
motoristas diariamente. A empresa, que carrega, no máximo, 10 caminhões por dia, pretende
informatizar esse processo. Implemente um sistema que atenda às necessidades da empresa
considerando as possibilidades de chegada de um novo caminhoneiro, saída de um
caminhoneiro, verificar se existe caminhoneiro no aguardo, verifique se o número de
carregamentos do dia foi atingido, listar todos os caminhões no aguardo.
*/

class ControleCaminhoes {
    constructor() {
        this.fila = []; // fila de caminhoneiros aguardando
        this.carregados = 0; // quantidade de caminhões carregados no dia
        this.limite = 10; // limite máximo por dia
    }

    // função para chegada de um novo caminhoneiro (entra na fila)
    chegada(nome) {
        this.fila.push(nome);
    }

    // função para saída de um caminhoneiro (atendimento)
    atender() {
        if (this.fila.length === 0) {
            return "Nenhum caminhoneiro na fila";
        }

        if (this.carregados >= this.limite) {
            return "Limite de carregamentos atingido";
        }

        this.carregados++;
        return this.fila.shift(); // remove o primeiro da fila
    }

    // função para verificar se existe caminhoneiro aguardando
    temCaminhoneiro() {
        return this.fila.length > 0;
    }

    // função para verificar se atingiu o limite do dia
    limiteAtingido() {
        return this.carregados >= this.limite;
    }

    // função para listar todos os caminhoneiros na fila
    listarFila() {
        return this.fila;
    }
}

// Testes do sistema
const sistema = new ControleCaminhoes();

// Chegada de caminhoneiros
sistema.chegada("João");
sistema.chegada("Maria");
sistema.chegada("Pedro");

console.log(sistema.listarFila()); 
// esperado: ["João", "Maria", "Pedro"]

// Atendimento
console.log(sistema.atender()); // esperado: João
console.log(sistema.atender()); // esperado: Maria

// Verificar se ainda tem caminhoneiro
console.log(sistema.temCaminhoneiro()); // esperado: true

// Adicionando mais
sistema.chegada("Carlos");

// Continuando atendimento
console.log(sistema.atender()); // esperado: Pedro
console.log(sistema.atender()); // esperado: Carlos

// Testando limite
for (let i = 0; i < 10; i++) {
    sistema.chegada("Caminhoneiro " + i);
    sistema.atender();
}

console.log(sistema.limiteAtingido()); 
// esperado: true

// Tentando atender após limite
console.log(sistema.atender()); 
// esperado: "Limite de carregamentos atingido"