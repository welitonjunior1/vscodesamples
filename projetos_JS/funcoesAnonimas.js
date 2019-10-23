//Uma function anonima é uma função sem nome só isso
const soma = function (x, y){
    return x + y
}
// essa function pega os resultados de 'a' e 'b' e chama a function 'soma' se não for passado nem uma operação 
const imprimaResultado = function ( a, b, operacao = soma){
    console.log(operacao(a, b))
}
imprimaResultado(3, 4)// aqui não passou nem uma operação então ele vai fazer a soma dos dois valores
imprimaResultado(3, 4, soma)// outro jeito de chamar a function 'soma'

// modifica a operação com uma function anonima
imprimaResultado(3, 4, function ( x, y){
    return x - y 
})
// arrow function sempre é anonima por que eu não passo o nome da function
imprimaResultado(3, 4, (x, y) => x * y)

// function anonima dentro de objeto 
const pessoa = {
     falar: function (){
         console.log('Opa')
     }
}

pessoa.falar()// Chamando a function dentro de um contexto de um objeto