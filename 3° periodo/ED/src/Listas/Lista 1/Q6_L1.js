/*
QUESTÃO 6. A Notação Polonesa Reversa (RPN, do inglês Reverse Polish Notation) é uma
notação matemática onde cada operador segue todos os seus operandos. Por exemplo, para
somar três e quatro, alguém escreveria "3 4 +" em vez de "3 + 4". Se houver múltiplas operações,
o operador é dado imediatamente após seu segundo operando; então a expressão "3 - 4 + 5"
seria escrita como "3 4 - 5 +", primeiro subtraindo 4 de 3 e depois adicionando 5 a isso.
Desenvolva um método que transforme a expressão algébrica com parênteses em uma forma
RPN. Você pode supor que para os casos de teste abaixo apenas letras simples serão usadas e
colchetes [] não serão utilizados. A ordem de precedência de operadores é muito importante e
não deve ser ignorada.

Entrada                         Saída
(a+(b*c))                       abc*+
((a+b)*(z+x))                   ab+zx+*
((a+t)*((b+(a+c))^(c+d)))       at+bac++cd+^*
a+b*c-d                         abc*+d-
(a+b)+c/d                       ab+cd/+
a*b-(c-d)+e                     ab*cd-e+
*/

class Pilha {
    constructor() {
        this.itens = [];
    }

    // Adiciona um elemento ao topo da pilha
    push(elemento) {
        this.itens.push(elemento);
    }

    // Remove e retorna o elemento do topo da pilha
    pop() {
        if (this.isEmpty()) {
            return null;
        }
        return this.itens.pop();
    }

    // Verifica se a pilha está vazia
    isEmpty() {
        return this.itens.length === 0;
    }

    // Retorna o elemento do topo da pilha sem removê-lo
    peek() {
        if (this.isEmpty()) {
            return null;
        }
        return this.itens[this.itens.length - 1];
    }

    // Converte uma expressão algébrica para Notação Polonesa Reversa (RPN)
    converterParaRPN(expressao) {
        // Define a precedência dos operadores
        const resultado = [];
        const operadores = new Pilha(); // ✅ corrigido aqui
        const precedencia = {
            '+': 1,
            '-': 1,
            '*': 2,
            '/': 2,
            '^': 3
        };

        // Itera sobre cada caractere da expressão
        for (let char of expressao) {
            if (/[a-zA-Z]/.test(char)) {
                resultado.push(char);
            } else if (char === '(') {
                operadores.push(char);
            } else if (char === ')') {
                while (!operadores.isEmpty() && operadores.peek() !== '(') {
                    resultado.push(operadores.pop());
                }
                operadores.pop(); // Remove o '('
            } else if (precedencia[char]) {
                while (!operadores.isEmpty() && precedencia[operadores.peek()] >= precedencia[char]) {
                    resultado.push(operadores.pop());
                }
                operadores.push(char);
            }
        }
        
        // Adiciona os operadores restantes à lista de resultados
        while (!operadores.isEmpty()) {
            resultado.push(operadores.pop());
        }

        return resultado.join('');
    }
}

let pilha = new Pilha();
console.log("Digite uma expressão algébrica (exemplo: (a+(b*c))):");

// Lê a entrada do usuário e converte para RPN
process.stdin.on("data", (data) => {
    const entrada = data.toString().trim();
    console.log("Notação Polonesa Reversa:", pilha.converterParaRPN(entrada));
});