const FilaCircular = require('../filaCircular');

describe('Fila Circular', () => {
    test('funciona de forma circular', () => {
        const fila = new FilaCircular(3);

        fila.enqueue(1);
        fila.enqueue(2);
        fila.enqueue(3);

        fila.dequeue();
        fila.enqueue(4);

        expect(fila.front()).toBe(2);
    });

    test('overflow', () => {
        const fila = new FilaCircular(2);
        fila.enqueue(1);
        fila.enqueue(2);

        expect(() => fila.enqueue(3)).toThrow();
    });
});