function intercalar() {
      const p1 = document.getElementById("palavra1").value;
      const p2 = document.getElementById("palavra2").value;
      let resultado = "";

      const max = Math.max(p1.length, p2.length);

      for (let i = 0; i < max; i++) {
        if (i < p1.length) resultado += p1[i];
        if (i < p2.length) resultado += p2[i];
      }

      document.getElementById("resultado").value = resultado;
    }