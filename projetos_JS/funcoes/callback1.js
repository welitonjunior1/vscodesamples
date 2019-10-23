const fabricante = [ "Mercedes", "Audi", "BMW", "vw"]
//essa function percorre toda o arrow e mostra o indice e o nome
function imprimir (nome, indice){
    console.log(`${indice + 1}. ${nome}`)
}

fabricante.forEach(imprimir)
fabricante.forEach(fabricante => console.log(fabricante))