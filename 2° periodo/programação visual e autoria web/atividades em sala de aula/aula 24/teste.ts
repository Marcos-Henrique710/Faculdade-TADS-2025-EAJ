/*
Crie dois tipos, Endereco e Contato, e uma função que aceita um objeto que é a 
união desses dois tipos. A função deve imprimir todas as propriedades do objeto.
Modules   Tipos avançados   Classes abstratas   Atividades 
*/

type Endereco = {
    rua: string;
    cidade: string;
    estado: string;
    cep: string;
};
type Contato = {
    nome: string;
    telefone: string;
    email: string;
};
function imprimirInformacoes(info: Endereco | Contato): void {
    for (const chave in info) {
        if (info.hasOwnProperty(chave)) {
            console.log(`${chave}: ${info[chave as keyof typeof info]}`);
        }
    }
}
const enderecoExemplo: Endereco = {
    rua: "Rua das Flores",
    cidade: "São Paulo",
    estado: "SP",
    cep: "01234-567"
};
const contatoExemplo: Contato = {
    nome: "João Silva",
    telefone: "(11) 98765-4321",
    email: "joaosilva@gmail.com",
}
imprimirInformacoes(enderecoExemplo);
imprimirInformacoes(contatoExemplo);
