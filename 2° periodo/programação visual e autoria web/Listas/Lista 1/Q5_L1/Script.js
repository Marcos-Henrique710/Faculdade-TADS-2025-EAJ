let palavra = document.getElementById("palavra").innerText;

function verificarPalindromo() {
    const palavra = document.getElementById('palavra').value;
    const palavraInvertida = palavra.split('').reverse().join('');
                    
    let resultado;
    if (palavra === palavraInvertida) {
        resultado = `"${palavra}" é um palíndromo.`;
    } else {
        resultado = `"${palavra}" não é um palíndromo.`;
    }
                    
    document.getElementById('resultado').innerText = resultado;
}