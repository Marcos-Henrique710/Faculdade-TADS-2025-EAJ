function converterData() {
  let data = document.getElementById("data").value;
  let partes = data.split("/"); // separa dia, mês e ano

  if (partes.length !== 3) {
    document.getElementById("resultado").innerText = "Formato inválido! Use dd/mm/aaaa.";
    return;
  }

  let dia = partes[0];
  let mes = parseInt(partes[1]);
  let ano = partes[2];

  let meses = [
    "janeiro", "fevereiro", "março", "abril", "maio", "junho",
    "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
  ];

  // Verifica se o mês é válido
  if (mes < 1 || mes > 12) {
    document.getElementById("resultado").innerText = "Mês inválido!";
    return;
  }

  let dataExtenso = `${dia} de ${meses[mes - 1]} de ${ano}`;
  document.getElementById("resultado").innerText = dataExtenso;
}