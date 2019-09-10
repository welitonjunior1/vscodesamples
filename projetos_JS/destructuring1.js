//contruindo um destructuring com array 

const [a] = [10]
console.log(a) // mostra a destructuring dentro do array tira de dentro da variavel

const [n1, , n3, , n5, n6 = 0] = [10, 7, 9, 8] //esta nolocando valores na posição n1, n2, n3, n4, n5, n6 e colocando o valor 0 na n6 ex n6 = 0
console.log(n1, n3, n5, n6) // estou pedindo pra mostar a possição n1, n3, n5, n6, pulando a n2, e n4 

