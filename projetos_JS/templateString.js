const nome = 'Rebeca'
const concatenacao = 'Olá ' + nome + '!'
const template = `
    Olá
    ${nome}!`// Concatenação de multiplas linhas
console.log(concatenacao, template)

const up = texto => texto.toUpperCase() //Criando uma função de para passar para maiusculo
console.log(`Ei... ${up('cuidado')}!`)// Criando a espreção e chamando a função ${} 
