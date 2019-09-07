const valores = [7.7, 8.9, 6.3, 9.2]// dasdos dinâmico

console.log(valores[0], valores [3])
console.log(valores[4])// tem de 0 até elementos por isso vai dar undefined


valores[4] = 10 //add um valor no array indice[4]
console.log(valores)// acresenta o valor 10 no array
console.log(valores.length)//  

valores.push({id:3}, false, null, 'teste')
console.log(valores)

console.log(valores.pop())
delete valores[0]// tira um atributo do valores
console.log(valores)

console.log(typeof valores)// tipo da varialvel