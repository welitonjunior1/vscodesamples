//usando a notação literal de objetos

const obj1 = {}
console.log(obj1)

//criando um objeto de dentro de uma function
console.log(typeof Object, typeof new Object)

// objeto em JS
const obj2 = new Object
console.log(obj2)

//funções contrutoras 
//o nome vai ficar vizivel no escopo global e pode ser alterado já o preco e desc não vão estar viziveis no escopo global vai ser privado
function Produto (nome, preco, desc ) {
    // deixando vizivel no  escopo global
    this.nome = nome
    // criando um metodo para pegar o preco e dar o desconto e mostrando no escopo global
    this.getPrecoComDesconto = () =>{
        return preco * (1 - desc)
    }
}

//criando um estancia do produto passando o nome e o valor e desconto
const p1 = new Produto('Caneta', 7.99, 0.15)

//criando um estancia do produto passando o nome e o valor e desconto
const p2 = new Produto('Notebook', 2990.50, 0.25)

//chamando as duas estancias do produtos 
console.log(p1.getPrecoComDesconto(),'valor da caneta com desconto' )
console.log(p2.getPrecoComDesconto(),'Valor do notebook com desconto')

//Função factory
function criarFuncionario(nome, salarioBase, faltas){
    return {
        nome,
        salarioBase,
        faltas,
        //criando uma função pra calcular o desconto no salario com base no salario dele
        getSalario(){
            return (salarioBase / 30) * (30 - faltas)
        }
    }
}

// criando um funcionario passando o atributo nome, salarioBase e as faltas 
const f1 = criarFuncionario('João', 7980, 4)
// criando o segundo(a) funcionario passando o atributo nome, salarioBase e as faltas 
const f2 = criarFuncionario('Maria', 2550, 1)

//chamando na tela o resultado dos funcionarios passando f1, f2 chamando a função de calcular o desconto con as faltas
console.log(f1.getSalario(),'Primeiro funcionario',)
console.log( f2.getSalario(),'Segundo funcionario')
console.log( f1.getSalario(),f2.getSalario(),'Os dois valores juntos')

// Object.create
const filha = Object.create(null)
filha.nome = 'Ana'
console.log(filha)

//Uma função famosa quer retorna um objeto...
//Json é texto para transformar em um objeto tem que converter para poder manipular
const fromJSON = JSON.parse('{"info": "Sou um Json"}')
console.log(fromJSON.info)