// Novo recurso do EcmaScript 2015

const pessoa = {
    nome: 'ana',
    idade: 5,
    endereco: {
        logradouro: 'Rua Dr junior',
        numero: 1000

    }
}

const { nome, idade } = pessoa // dessetrutura o dado nome e idade do objeto pessoa
console.log(nome, idade) // mostra nome e idade do objeto