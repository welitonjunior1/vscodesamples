Number.prototype.entre = function ( inicio, fim){
    return this >= inicio && this <= fim
}

const imprimirresultado = function (nota){
    if(nota.entre(9, 10)){
        console.log('Quadro de Honra')
    }
    else if(nota.entre(7, 8.99)){
        console.log('Aprovado')
    }
    else if(nota.entre(4, 6.99)){
        console.log('Recuperação')
    }
    else if(nota.entre(0, 3.99)){
        console.log('Reprovado')
    }
    else{
        console.log('Nota invalida!!!')
    }
}

imprimirresultado(10)
imprimirresultado(8.9)
imprimirresultado(6.55)
imprimirresultado(3.55)
imprimirresultado(-1)
imprimirresultado(11)
