// classe pai
const pai = { nome: 'Pedro', corCabelo: 'preto'}

//classe filha com a herança do pai cabelo preto
const filha1 = Object.create(pai)
filha1.nome= 'Ana'
console.log(filha1.corCabelo)

const filha2 = Object.create(pai, {
    //defini que o valor do nome da filha é Bia, não pode ser modificado e pode ser listado quando for consultado
    nome: { value: 'Bia', writable: false, enumerable: true}
})

console.log(filha2.nome)
filha2.nome = 'Carla'
console.log(`${filha2.nome} tem cabelo ${filha2.corCabelo}`)

console.log(Object.keys(filha1))
console.log(Object.keys(filha2))

for(let key in filha2) {
    //Essa função a bai serve para saber se a herança é do proprio Objeto ou se ele veio por herança
    //nome.hasOwnProperty(key)
    filha2.hasOwnProperty(key) ?
        console.log(key) : console.log(`Por herança: ${key}`)
}