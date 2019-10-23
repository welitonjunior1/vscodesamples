// Não consigo achar a variavel atraves do this por que esta dentro do abjeto 
class Pessoa {
    constructor(nome){
        this.nome = nome
    }
    falar(){
        console.log(`Meu nome é ${this.nome}`)
    }
}
const p1 = new Pessoa('João')
p1.falar()
/**************************************************************************************************************/
//Function factory
// nesse contexto eu não preciso acessar o this na variavel nome e tenho acesso a variavel
const criarPessoa = nome => {
    return {
        falar: () => console.log(`Meu nome é ${nome}`)
    }
}

const p2 = criarPessoa('Victor')
p2.falar()