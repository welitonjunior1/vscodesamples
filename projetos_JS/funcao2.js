// Armazenando uma função em uma variavel
const imprimaSoma = function (a, b){
    console.log(a + b)
} 
imprimaSoma(2, 3)

// Armazena uma função arrow em uma variavel
const soma = (a, b) =>{ // nova versão do java 2015 EcmaScript de arrow function
    return a + b
}
 console.log(soma(2, 3))

 // retorno implícito
 const subtracao = (a, b) => a - b // Modo mais simples quando só tem uma linha não precisa de {}
 console.log(subtracao(2, 3))

 const imprimir2 = a => console.log(a)
 imprimir2('Legal!!!') 