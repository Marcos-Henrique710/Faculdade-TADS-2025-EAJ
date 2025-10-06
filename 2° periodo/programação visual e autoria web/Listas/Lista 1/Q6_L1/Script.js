function inverterNomes() {
  let nomes = [];
  
    for (let i = 1; i <= 5; i++) {
        let nome = document.getElementById("nome" + i).value.trim();
        nomes.push(nome);
    }

  nomes.reverse();

    for (let i = 1; i <= 5; i++) {
        document.getElementById("nome" + i).value = nomes[i - 1];
    }
}
