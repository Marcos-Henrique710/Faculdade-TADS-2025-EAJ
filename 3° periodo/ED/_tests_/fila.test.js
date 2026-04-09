import Fila from '../src/praticas_sala_de_aula/Fila';

describe('Fila', () => {
    test('enqueue adiciona elemento', () => {
        const fila = new Fila(3);
        fila.enqueue(10);
        expect(fila.front()).toBe(10);
    });

    test('dequeue remove elemento', () => {
        const fila = new Fila(3);
        fila.enqueue(10);
        fila.enqueue(20);

        expect(fila.dequeue()).toBe(10);
        expect(fila.front()).toBe(20);
    });

    test('fila vazia lança erro', () => {
        const fila = new Fila(2);
        expect(() => fila.dequeue()).toThrow();
    });

    test('fila cheia lança erro', () => {
        const fila = new Fila(1);
        fila.enqueue(10);
        expect(() => fila.enqueue(20)).toThrow();
    });
});