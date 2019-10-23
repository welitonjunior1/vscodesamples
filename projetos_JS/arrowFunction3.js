let comparaComThis = function (param){
    console.log(this === param)// Faz a comparação da function param com this 
}

comparaComThis(global)// chama a function comparaComThis no escopo global e mostra que é igual, ou seja true tomar cuidado

const obj = {}
comparaComThis = comparaComThis.bind(obj)// Aqui faz com que toda vez que eu chamar a function comparaComThis ele me mostra obj e não o global
comparaComThis(global)// não acha mais no global
comparaComThis(obj)//Agora ele acha a function que está apontada o obj

let comparaComThisArrow = param => console.log(this === param)// function arrow
comparaComThisArrow(global)// Na function arrow ele não é estritamente igual ao global
comparaComThisArrow(module.exports)// ele é um module.exports 

comparaComThisArrow = comparaComThisArrow.bind(obj)
comparaComThisArrow(obj)
comparaComThisArrow(module.exports
    )


