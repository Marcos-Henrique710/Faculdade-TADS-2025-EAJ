const ListaDupla = require('../listaDuplamenteLigada');

describe('Lista Duplamente Ligada', () => {
    test('inserção básica', () => {
        const lista = new ListaDupla();
        lista.inserir(1);
        lista.inserir(2);

        expect(lista.buscar(1)).toBe(true);
        expect(lista.buscar(2)).toBe(true);
    });

    test('remoção', () => {
        const lista = new ListaDupla();
        lista.inserir(1);
        lista.inserir(2);

        lista.remover(1);

        expect(lista.buscar(1)).toBe(false);
    });
});