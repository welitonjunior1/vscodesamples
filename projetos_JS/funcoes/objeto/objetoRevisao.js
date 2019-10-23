// coleção dinâmica de PARES CHAVE/VALO
const produto = new Object //Esse objeto esta sendo estanciado
produto.nome = 'Cadeira'// colocando atributo no objeto
produto['marca do produto'] = 'Generica'// colocando atributo no objeto
produto.preco = 220 // colocando chave e valor no objeto

console.log(produto)// chamando o objeto 
delete produto.preco// deletando o atributo preco do objeto produto
delete produto['marca do produto']// deletando o atributo preco do objeto produto
console.log(produto)//chamando o produto 

//criando um outro objeto
const carro = { 
    modelo: ' A4',
    valor:89000,
    //criando um objeto dentro de um objeto
    proprietario:{
        nome: 'Raul',
        idade: 56,
        //criando um objeto dentro de um objeto
        endereco:{
            logradouro: 'Rua ABC',
            numero: 123
        }
        
    },
    //objeto dentro do objeto carro com tres atributos
    condutores: [{
        nome: 'Junior',
        idade: 19
    },{
        nome: 'Ana',
        idade: 42
    },{
        nome: 'weliton',
        idade: 28
    }],

    calcularValoresSeguro: function(){
    //...
    }
}

//Colocando o número 1000 e esta dentro de um objeto que esta dentro de outro objeto
carro.proprietario.endereco.numero = 1000
//Outra maneira de se colocar um valor dentro de um objeto que esta dentro de outro objeto
// ou quando se tem o atributos atraves de string é alterado atraves de string
carro['proprietario']['endereco']['logradouro'] = 'av cloria'
//Chamando todo o objeto com todos atributos
console.log(carro)

// delete carro.condutores
//deletando endereco que esta dentro do objeto
delete carro.proprietario.endereco
// deletando calcularValoresSeguro dentro do objeto
delete carro.calcularValoresSeguro
//chama todos os atributos e objetos que esta dentro do objeto carro
console.log(carro)
//chamando de dentro do objeto carro os condutores
console.log(carro.condutores)
//chamando de dentro do objeto carro quantos atributos tem resultado é 2
console.log(carro.condutores.length)