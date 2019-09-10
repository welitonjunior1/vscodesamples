//Essa funtion retorna um valor aleatorio dentro de uma destructuring

function rand({min = 0, max = 1000}){
    //calculo para gerar numeros randomecos
    const valor = Math.random() * (max - min) + min
    return Math.floor(valor)
}
// testando a function retorna valores randomeco entre 40 minimo a 50 maximo
const obj = {max: 50, min: 40}
console.log(rand(obj))
// mostra um valor randomeco de min 955 max de 1000 ja definido na funtion
console.log(rand({min: 955}))
// pegar aqualquer numero aleatorio de 0 a 1000 ja definido na function
console.log(rand({}))