let dobro = function (a){
    return 2 * a
}

dobro = (a) => {
    return 2 * a 
}
dobro = a => 2 * a // return implícito, Forma simplificada de usar uma arrow fuction com uma linha de codigo, sem o bloco de comandos sem return
console.log(dobro(Math.PI))
/**************************************************************************************************************************/

let ola = function () {
    return 'Olá'
}
let = () => 'Olá'// Forma simplificada de usar uma arrow fuction com uma linha de codigo, sem o bloco de comandos sem return
ola = _ => 'Olá'//possui um parametro
console.log(ola())