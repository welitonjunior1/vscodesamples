// estrategia 1 para gerar valor padão

function soma1(a, b, c){// obs: soma com 0 da erros não usar essa opção
    a = a || 1 //se o valor de a = a ele muda pra 1 não deixa o valor null
    b = b || 1//
    c = c || 1//

    return a + b + c // return os valores somados
}

console.log(soma1(), soma1(3), soma1(1, 2, 3), soma1(0, 0, 0)) // aqui soma os valores nas suas devidas posicões

console.log(soma1())// é outro exemplo igual o de cima
console.log(soma1(3))// é outro exemplo igual o de cima
console.log(soma1(1, 2, 3))// é outro exemplo igual o de cima
console.log(soma1(0, 0, 0))// é outro exemplo igual o de cima

// estrategia 2, 3 e 4  para gerar valor padrão
function soma2(a, b, c){
    a = a !== undefined ? a : 1 // aqui ele muda só o valor undefined e coloca o valor padrão 1
    b = 1 in arguments ? b : 1 // ele verifica se tem o valor de indece 1 da function que é o b se não tiver valor na variavel ele coloca como padrão o valor 1
    c = isNaN(c) ? 1 : c // // se não tiver um numero no indece 3  que esta com a variavel c ele coloca o como padrão o valor 1 se tiver ele coloca o caloca oque estiver em na variavel c
    
    return a + b + c
}

    console.log(soma2(), soma2(3), soma2(1, 2, 3), soma2(0, 0, 0))// Mostra 4 opções

    // valor padrão com ES2015 versão mais nova
    function soma3(a = 1 , b = 1, c = 1){// modo simplificado de mostrar como fazer colocar valor padão nas variaveis da função
        return a + b + c
    }

    console.log(soma3(), soma3(3), soma3(1, 2, 3), soma3(0, 0, 0))// mostra todos os resultados 