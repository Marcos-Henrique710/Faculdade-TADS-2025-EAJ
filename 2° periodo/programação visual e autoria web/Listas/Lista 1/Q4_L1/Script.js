document.getElementById("loginForm").addEventListener("submit", function(e) {
    e.preventDefault();

    const email = document.getElementById("email").value.trim();
    const senha = document.getElementById("senha").value.trim();
    const msg = document.getElementById("mensagem");

    if (email === "" || senha === "") {
        msg.style.color = "red";
        msg.textContent = "Por favor, preencha todos os campos.";
        return;
    }

    if (!padraoEmail.test(email)) {
        msg.style.color = "red";
        msg.textContent = "Digite um e-mail válido (ex: usuario@dominio.com).";
        return;
    }

    if (email === "teste@exemplo.com" && senha === "12345") {
        msg.style.color = "green";
        msg.textContent = "Login realizado com sucesso!";

    } else {
        msg.style.color = "red";
        msg.textContent = "E-mail ou senha incorretos.";
    }
});
