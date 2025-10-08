function gerarTabuada() {
  const num = document.getElementById("numero").value;
  const resultado = document.getElementById("resultado");

  if (num === "") {
    resultado.innerHTML = "<p>Por favor, digite um número.</p>";
    return;
  }

  let tabela = "<table border='1' cellpadding='5'>";
  tabela += "<tr><th>Operação</th><th>Resultado</th></tr>";

  for (let i = 1; i <= 10; i++) {
    tabela += "<tr><td>" + num + " x " + i + "</td><td>" + (num * i) + "</td></tr>";
  }

  tabela += "</table>";

  resultado.innerHTML = tabela;
}