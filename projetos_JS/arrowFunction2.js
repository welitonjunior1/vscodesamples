function Pessoa () {
    this.idade = 0 

    setInterval(() => {// usando função errow com o sinal => simplifica o código
        this.idade++
        console.log(this.idade)

    },1000)
}
new Pessoa