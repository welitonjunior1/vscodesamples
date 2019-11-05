const pessoa = {
    nome: 'Rebeca',
    idade: 2,
    peso: 13
}

//Pega todas as chaves do objeto
console.log(Object.keys(pessoa))

//pega todos os valores do objeto
console.log(Object.values(pessoa))

//pega chaves e valores do objeto
console.log(Object.entries(pessoa))

//como percorrer os elementos do array 
Object.entries(pessoa).forEach(e =>{
    console.log(`${e[0]}: ${e[1]}`)
})
/*Outro jeito de fazer 
Object.entries(pessoa).forEach([cgave, valor]) =>{
    console.log(`${chave}: ${valor}`)
}
*/

//Como criar outra propriedade no Object
//pessoa é o targuet.
//Depois definir o nome que vai ser criado com as aspas simples se nao ele como se já tivesse uma chave com esse valor
Object.defineProperty(pessoa, 'dataNascimento',{

    //serve para mostrar que vai ser listado quando o objeto for consultado
    enumerable: true, //se eu colocar false ele não mostra quando consultar a lista de chaves do Object
   
    //Serve para dizer que não pode ser modificada
    writable: false,// faz como se fosse o freeze não deixa alterar
   
    //serve para mostrar o valor que eu estou dando para essa variavel 
    value: '01/01/2019'
})

//exemplo que mostra que não foi aterado o value
pessoa.dataNascimento = '01/01/2017'

console.log(pessoa.dataNascimento)

//Mostra toda lista de chaves que tem dentro do Object
console.log(Object.keys(pessoa))

//Object.assign (ECMAScrip 2015)
const dest = { a: 1}
const o1 = { b: 2 }
const o2 = { c: 3, a: 4 }

// Esse Object faz a concatenação de todos os objetos escrito depois do dest = destino
const obj = Object.assign(dest, o1, o2)

//congela o Object para não ser alterado
Object.freeze(obj)
obj.c = 1234
console.log(obj)
