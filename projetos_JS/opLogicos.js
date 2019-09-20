function compras(trabalho1, trabalho2){
const comprarSorvete = trabalho1 || trabalho2 // vai analizar as duas funçõer se uma for verdadeiro ela compraq sorvete
const comprarTv50 = trabalho1 && trabalho2 // 
const compraTv32 = trabalho1 != trabalho2
const manterSaudavel = !comprarSorvete // operador unário

return { comprarSorvete, comprarTv50, compraTv32, manterSaudavel}//Chamando todos os objetos, Nova versão do EcmaScript 2015
}

console.log(compras(true, true))
console.log(compras(true, false))
console.log(compras(false, true))
console.log(compras(false, false))