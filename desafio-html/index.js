function inserirAluno(){

    const nome = prompt("Digite o nome do aluno");
    
    const tabela = document.getElementById("tabela");

    const novalinha = document.createElement('tr');
    const colunanome = document.createElement('td');
    colunanome.innerText = nome;
    novalinha.appendChild(colunanome);

    tabela.appendChild(novalinha);

    
    const falta = prompt("Digite a quantidade de faltas")
    const tabela1 = document.getElementById('tabela')

    const novalinha1 = document.createElement('tr');
    const colunanome1 = document.createElement('td');
    colunanome1.innerText = falta;
    novalinha1.appendChild(colunanome1);

    tabela1.appendChild(novalinha1);

}

