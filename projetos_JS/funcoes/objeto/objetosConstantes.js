// pessoa -> está armazenado em 123 {...}
const pessoa = { nome: 'João'}
pessoa.nome = ' Pedro'

console.log(pessoa)

// pessoa -> esta armazenada em 456 -> {...}
// pessoa = { nome: 'Ana' }

//serve para congelar o objeto ou seja o ojeto não pode ser alterado nem excluido.

pessoa.nome = 'maria'
pessoa.end = 'Rua ABC'

//deletar um objeto pessoa.nome
delete pessoa.nome

console.log(pessoa.nome)
console.log(pessoa)

// para criar logo de cara o objeto freeze
const pessoaConstante = Object.freeze({ nome: ' João '})
console.log(pessoaConstante)

