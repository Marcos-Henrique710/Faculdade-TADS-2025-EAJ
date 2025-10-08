document.getElementById("formNumeros").addEventListener("submit", function(event) {
      event.preventDefault();

      const n1 = Number(document.getElementById("num1").value);
      const n2 = Number(document.getElementById("num2").value);
      const n3 = Number(document.getElementById("num3").value);

      const soma = n1 + n2 + n3;
      const media = soma / 3;
      const produto = n1 * n2 * n3;
      const maior = Math.max(n1, n2, n3);
      const menor = Math.min(n1, n2, n3);

      const resultado = `
        <table border="1">
          <tr><th colspan="2">Resultados</th></tr>
          <tr><td>Números digitados</td><td>${n1}, ${n2}, ${n3}</td></tr>
          <tr><td>Soma</td><td>${soma}</td></tr>
          <tr><td>Média</td><td>${media.toFixed(2)}</td></tr>
          <tr><td>Produto</td><td>${produto}</td></tr>
          <tr><td>Maior</td><td>${maior}</td></tr>
          <tr><td>Menor</td><td>${menor}</td></tr>
        </table>
      `;

      document.getElementById("saida").innerHTML = resultado;
    });