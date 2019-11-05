//variaveis
const a = 1 
const b = 2
const c = 3

// Como era criado um Object antigamente logo a baixo
const obj1 = {a: a, b: b, c: c}

// Hoje como é criado
const obj2 = {a, b, c }

console.log(obj1, obj2)

//outra melhoria 
//metodo antigo
const nomeAttr = 'nota'
const valorAttr = 7.87

const obj3 = {}
obj3[nomeAttr] = valorAttr
console.log(obj3)

//metodo novo do ES 
const obj4 = {[nomeAttr]: valorAttr}
console.log(obj4)

//mais outro metodo de reduzido com function

const obj5 = {
    funco1: function(){
        //...
    },
    funcao2(){
        //...
    }
}

console.log(obj5)




