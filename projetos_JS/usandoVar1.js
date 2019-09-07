{
    {
        {
            {   //Exemplo 1 não fazer esse exemplo
                var sera ='Chamou global por que não está em uma função'/*É uma variavel global e pode ser chamada de qualquer parte do sistema, não é
                 recomendado usar essa opção, por que outras pessoas podem usar no decorrer do
                 projeto e acabar prejudicando por não saber que essa variavel já existe */
                console.log(sera)
            }
        }
    }
}
console.log(sera)

//Exemplo 2
function testeVar(){//Essa é uma função para criar var local não permitindo que outras pessoas acessem por acidente 
    var local ='Chamou a variavel de dentro da função' 
    console.log(local) // Chama a var local se eu chamar de fora da função ela retorna um erro
}
testeVar()

//Exemplo 3 não fazer esse exemplo

var numero = 1 
{
    var numero = 2
    console.log('Dentro', numero)
}

console.log('Fora', numero)