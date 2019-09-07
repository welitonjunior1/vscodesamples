const escola = "Olgaf" 

console.log(escola.charAt(4))
console.log(escola.charAt(5)) // não tras resultado por que a variavel vai de 0,1,2,3,4
console.log(escola.charCodeAt(3)) // trás o resultado do número escolhido da variavel como número da tabela asc
console.log(escola.indexOf('l'))// busca a letra que estou solicitando e me trás a sua posição 

console.log(escola.substring(1))// me trás o resultado da variavel apartir do número 1
console.log(escola.substring(0, 3))// me trás o resultado do 0 até 2 posição não mostrando á 3 

console.log('Escola '.concat(escola).concat("!"))// me trás a concatenação de strings sempre usar esse parametro de .concat
console.log(escola.replace('O', 'E'))// troca a letra O na variavel pela letra E

console.log('Ana,Maria,Pedro'.split(','))//Separa oque está escrito entre as aspas tranformando em Array passando o parametro (',')