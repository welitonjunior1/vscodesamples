// funtion declaration
// esse tipo de funcao já é carregada no sistema antes mesmo de chamar ela no console
console.log(soma(3, 4))//ex:

function soma(x, y){
    return x + y
}
/***********************************************************************************************************/
//Esse tipo só é chamada depois de ser executada
// function expression 
const sub = function (x, y){
    return x - y
}
console.log(sub(3, 4))
/***********************************************************************************************************/
// Essa function aparece o nome da função
// nomed function expression
const mult = function mult(x, y){
    return x * y
}
console.log(mult(3, 4))