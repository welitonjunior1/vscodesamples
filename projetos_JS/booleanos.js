let isAtivo = false
console.log(isAtivo)

isAtivo = 1
console.log(!!isAtivo)// faz a dupla negação da variavel

console.log('os que retornam verdadeiros')
console.log(!!3)
console.log(!!-1)
console.log(!!' ')
console.log(!!'texto')
console.log(!!{})
console.log(!! [])
console.log(!!Infinity)
console.log(!!(isAtivo = true))

console.log('Os que retornam falso')
console.log(!!0)
console.log(!!'')
console.log(!!null) //serve para verificação
console.log(!!NaN)
console.log(!!undefined)
console.log(!!(isAtivo = false))

console.log('Para finalizar...')
console.log(!!('' || null || 0 || ' ')) //retorna verdadeiro por que é OU

let nome = 'Lucas'
console.log(nome || 'Desconhecido')

