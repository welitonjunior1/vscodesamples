function soma(){ 
    let soma = 0 // Essa variavel esta com o valor 0 para return alguma coisa    
    for ( i in arguments){ // esse arguments mostra todos os elementos do array
        soma += arguments [i] // soma mais um valor do array quantos valores tiverem
    }
    return soma
}

console.log(soma())
console.log(soma(1))
console.log(soma(1.1, 2.2, 3.3))// soma todos 
console.log(soma(1.1, 2.2, "teste"))// soma todos e concatena o texto
console.log(soma('a', 'b', 'c')) // soma todos mais o valor do 0 da variavel