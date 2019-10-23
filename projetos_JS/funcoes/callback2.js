const notas =[7.7, 6.5, 5.2, 8.9, 3.6, 7.1, 9.0]
//sem callback 
// extrai as notas menores que 7
// 
const notasBaixas1 = []
for (let i in notas) { // verifica todo o array por indece um por um e tras os resultado
    if (notas [i]< 7){ //verifica as notas menores que 7 
        notasBaixas1.push(notas[i])//adiciona um elemento no array
    }
}
console.log(notasBaixas1)

//com callback
// essa nota baixa vai filtrar o array e vai verificar quais as notas são menores que 7 retorna true ou false se for verdadeiro ele tras o resultado se for falso ele não mostra no console, por isso uso o filter
const notasBaixas2 = notas.filter(function(notas){
    return notas < 7
})
console.log(notasBaixas2)

//com callback usando function arrow mais simples de todos
const notasBaixas3 = notas.filter(nota => nota < 7)
console.log(notasBaixas3)

// fazendo uma function que posso chamar em qualquer ligar do meu sistema
const notasMenorQue7 = notas => notas < 7 
const notasBaixas4 = notas.filter(notasMenorQue7)
console.log(notasBaixas4 )