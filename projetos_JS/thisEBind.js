const pessoa = {
    saudacao: 'Bom dia',
    falar(){
        console.log(this.saudacao)
    }
}
pessoa.falar()

const falar = pessoa.falar // Esse jeito de armazenar um objeto dentro de uma variavel da errado por isso tem que usar um bind
falar()// comflito entre paradigmas: funcional e 00

const falarDePessoa = pessoa.falar.bind(pessoa)// O bind serve para chamar um objeto de dentro de uma variavel
falarDePessoa()
