const sequencia = {
    //convenção, serve para identificar a variavel na linha de comando que vai ser acessada internamente
    _valor: 1, 
    // fazer um validador anres de retornar a variavel
    get valor() { return this._valor++},
    set valor(valor) {
        //ele vai validar que nessa variavel sempre vai ter um ID maior que o aterior na variavel
        if(valor > this._valor){
            this._valor = valor
        }
    }
}

console.log(sequencia.valor, sequencia.valor)
sequencia.valor = 1000
console.log(sequencia.valor, sequencia.valor)
sequencia.valor = 900
console.log(sequencia.valor, sequencia.valor)

