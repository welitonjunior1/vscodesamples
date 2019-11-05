const ferrari ={
    modelo: 'F40',
    velMax: 324
}

const volvo = {
    modelo: 'V40',
    velMax: 200
}

//Serve para acessar o prototipo do acima  e assim ate ele achar se não acher ele mostra undefined
// __proto__ para consultar 
console.log(ferrari.__proto__)

//extritamente igual
console.log(ferrari.__proto__ === Object.prototype)
console.log(volvo.__proto__ === Object.prototype)

//consulta pra ver se tem alguma Object antes do prototipo
console.log(Object.prototype.__proto__)

