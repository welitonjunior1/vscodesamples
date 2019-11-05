// Cadeia de prototipos (prototype chain)
Object.prototype.attr0 = '0'// não fazer isso em casa ! tomar cuidado com isso por que afeta toda a extrutura
const avo = {attr1: 'A'}
const pai = { __proto__: avo, attr2: 'B', attr3: '3'}
const filho = { __proto__: pai, attr3: 'C'}

//consultando filho, pai, avo, prototype pra ver se acha o atributo
//attr de atributo 0, 1, 2, 3
//O filho como esta depois do pai quando se consulta o attr3 ele faz um sobreamente do atributo como se fosse sobre escrito mais quando chama o pai o valor esta la
console.log(filho.attr0, filho.attr1, filho.attr2, filho.attr3 )

//chamando o pai pra saber se o atributo esta la
console.log(pai.attr2, pai.attr3)

const carro = {
    velAtual: 0,
    velMax: 200,
    acelerarMais(delta){
        if (this.velAtual + delta <= this.velMax){
            this.velAtual += delta
        }else{
            this.velAtual
        }
    },
    status(){
        return `${this.velAtual}Km/h de ${this.velMax}Km/h`
    }

}

const ferrari = {
    modelo: 'F40',
    velMax: 324 // shadowing faz o sobreamente da velMaxi de carro que esta acima
}

const volvo ={
    modelo:'V40',
    status(){
        //O super pra pegar 
        return `${this.modelo}: ${super.status()}`
    
    }
}

// posso usar o __proto__ tambem nesse caso mas se tiver o browser mais antigo tenho que usar essa de baixo
Object.setPrototypeOf(ferrari, carro)
Object.setPrototypeOf(volvo, carro)

console.log(ferrari)
console.log(volvo)

volvo.acelerarMais(100)
console.log(volvo.status())

ferrari.acelerarMais(300)
console.log(ferrari.status())
