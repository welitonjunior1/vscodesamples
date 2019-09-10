// novo recurso do EcmaScript 2015

const pessoa = {
    nome: 'Ana',
    idade: 5,
    endereco: {
    endereco: 'Rua ABC',
    numero: 1000
    }

}

const {nome, idade} = pessoa // Tira do objeto pessoa o atributo nome e idade
console.log(nome, idade) // mostra nome e idade depois de ter extraido do objeto pessoa

const { nome: n , idade: i} = pessoa // Troca o atributo por uma variavel
console.log(n, i)

const {sobrenome, bemHumorado = true} = pessoa// sobrenome não exite por isso ele vai aparecer undefined
console.log(sobrenome, bemHumorado)

const {endereco: {logradouro, numero, cep}} = pessoa 
console.log(logradouro, numero, cep)

