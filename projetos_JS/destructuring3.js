// fazendo destructuring com array e fazendo uma condição se digitar um numero maior para a variavel min e menor para max eles vão ser invertidos
function rand([min = 0, max = 1000]) {
    //essa condição ele cria outra destructuring se o valor de min for maior que max e coloca os valores dentro das novas variaveis max e min
    if (min > max) [min, max] = [max, min]
    const valor = Math.random() * ( max - min) + min
    return Math.floor(valor) 
}
// aqui estou passando o valor do maior primeiro ele vai alterar sozinho para não dar erro ao executar
//utilizado no caso de pedir para o usuário digitar os valores e não dar erro
console.log(rand([50, 40 ]))
//Passando só uma valor o do min ele vai entar no if e alterar as posições para não dar erro
console.log(rand([992]))
//Pulando o min e colocando o valor do máximo, na primeira vez que é executado ele vem como valor 0
console.log(rand([, 10]))
//não passando valor nem um ele vai pegar o valor do array delimitado de min e max da function  
console.log(rand([]))
//Gera um erro por que está chamando um objeto vazio e o destructuring não pode ler objetos undefined ou vazios
//console.log(rand())