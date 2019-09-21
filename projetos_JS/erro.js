function tratarErroELancar(erro){
    // exemplos de throw manda mensagem com oque eu escrever 

    //throw new Error('...')
    //throw erro 10
    //throw true
    //throw 'Mensagem'
    
    //throw serve para lançar o erro
    throw {

        nome: erro.nome,
        msg: erro.message,
        date : new Date

    }
    
}

function imprimirNomeGritado(obj){
    try {
        console.log(obj.nome.toUpperCase()+ '!!!')
    }
    catch(e){
        tratarErroELancar(e)
    }
    finally {
        console.log('Final')
    }
}

const obj = {nome: 'Roberto'}
imprimirNomeGritado(obj)