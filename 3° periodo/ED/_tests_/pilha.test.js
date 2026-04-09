const Pilha = require('../pilha');

describe('Pilha', () => {
    test('push adiciona elemento', () => {
        const pilha = new Pilha(2);
        pilha.push(10);

        expect(pilha.top()).toBe(10);
    });

    test('pop remove elemento', () => {
        const pilha = new Pilha(2);
        pilha.push(10);
        pilha.push(20);

        expect(pilha.pop()).toBe(20);
    });

    test('pilha vazia', () => {
        const pilha = new Pilha(2);
        expect(() => pilha.pop()).toThrow();
    });

    test('pilha cheia', () => {
        const pilha = new Pilha(1);
        pilha.push(10);

        expect(() => pilha.push(20)).toThrow();
    });
});