/*
QUESTÃO 5. É possível analisar se uma sequência parêntesis e colchetes está bem-formada,
ou seja, parênteses e colchetes são fechados na ordem inversa àquela em que foram abertos
utilizando uma pilha. Por exemplo, a sequência [ ( ) [ ( ) ] ] ( ) está bem-formada, enquanto ( ( )
] está malformada. Implemente um programa que recebe um char e analisa se ele está bem
formado em termos de ordem de parêntesis e colchetes.
*/

class Pilha {
    constructor() {
        this.itens = [];
    }

    push(elemento) {
        this.itens.push(elemento);
    }

    pop() {
        if (this.isEmpty()) {
            return null;
        }
        return this.itens.pop();
    }

    isEmpty() {
        return this.itens.length === 0;
    }

    peek() {
        if (this.isEmpty()) {
            return null;
        }
        return this.itens[this.itens.length - 1];
    }

    estaBemFormado(texto) {
        const pares = {
            '(': ')',
            '[': ']'
        };

        for (let char of texto) {
            if (pares[char]) {
                this.push(char);
            } else if (char === ')' || char === ']') {
                if (this.isEmpty() || pares[this.pop()] !== char) {
                    return false;
                }
            }
        }

        return this.isEmpty();
    }
}

console.log("Digite um char (exemplo: [ ( ) [ ( ) ] ] ( )):");

// Lê a entrada do usuário e verifica se está bem formada
process.stdin.on("data", (data) => {
    const entrada = data.toString().trim();
    const pilha = new Pilha();
    console.log("Está bem formado?", pilha.estaBemFormado(entrada));
});