let a = 3 // OBS: sempre criar uma variavel como let ou const para não ficar visivel no global para nimguem alterar facilmente

global.b =123

this.c = 456
this.d = false
this.e = 'teste'

console.log(a)
console.log(global)
console.log(this.c)
console.log(module.exports.c)
console.log(module.exports === this)
console.log(module.exports)

//criando um variavel maluca: sem var e let!
abc = 3 // não fazer isso em casa !!!
console.log(global.abc)





