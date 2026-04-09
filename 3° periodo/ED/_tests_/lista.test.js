const ListaLigada = require('../lista');

describe('Lista Ligada', () => {
    test('insere elementos', () => {
        const lista = new ListaLigada();
        lista.inserir(10);
        lista.inserir(20);

        expect(lista.buscar(10)).toBe(true);
        expect(lista.buscar(20)).toBe(true);
    });

    test('remove elemento', () => {
        const lista = new ListaLigada();
        lista.inserir(10);
        lista.inserir(20);

        lista.remover(10);

        expect(lista.buscar(10)).toBe(false);
    });

    test('buscar elemento inexistente', () => {
        const lista = new ListaLigada();
        expect(lista.buscar(99)).toBe(false);
    });
});