//Criando varios produtos com uma function factory 
function criarProduto(nome, preco){
    return{
        nome,
        preco,
        desconto: 0.1
    }
}
console.log(criarProduto('notbook', 2450.50))
console.log(criarProduto('iPad', 1050.50))