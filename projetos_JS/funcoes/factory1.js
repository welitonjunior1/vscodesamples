/* Para não ficar criando varios objetos repetidos no sistema igual o exeplo a baixo criasse a function Factory

const prod1 ={
    nome: '.....',
    preco: 45
}

const prod2 ={
    nome: '.....',
    preco: 50
}
*/
/************************************************************************************************************/

//Factory simples

function criarPessoa(){
    return {
        nome: 'Ana',
        sobrenome: 'Carolina'
    }
}
console.log(criarPessoa())