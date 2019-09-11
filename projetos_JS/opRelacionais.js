//Faz comparação com op valor e não com o tipo "true"
console.log('01', '1'== 1)
//faz comparação com o tipo de atributo se é igual, um é string o outro e number da "false"
console.log('02', '1' === 1)
//comparando a diferença de valores não tipo de valores "false" por que não o mesmo valor
console.log('03', '2' != 2)
// comparando o tipo de dado se é diferente 
console.log('04', '3' !== 3)

// comparando menor
console.log('05', 3 < 2 )
//comparando maior
console.log('06', 3 > 2 )
//comparando menor igual
console.log("07", 3 <= 2)
//comparando se é maior igual
console.log("08", 3 >= 2)

//Criando datas, o zero é uma data de referência que é 01/01/1970 
const d1 = new Date(0)
const d2 = new Date(0)

// Faz a comparação se são estritamente iguais, tipo datas da "false"
console.log('09', d1 === d2)
// faz a referenci de memoria como um é d1 e o outro é d2 da "False"
console.log('10', d1 == d2)
//faz comparação de data e tempo como os dois são executados ao mesmo tempo ta "True"
console.log('11', d1.getTime() === d2.getTime())

//Faz a comparação pra verificar de undefined é igual a null "TRUE"
console.log('12', undefined == null)
//Faz a comparação pra verificar se é extritamente igual, undefined e null "False"
console.log('13', undefined === null)




