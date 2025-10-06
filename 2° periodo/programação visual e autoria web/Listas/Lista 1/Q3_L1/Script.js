let paragrafo = document.getElementById("paragrafo");

function MostraOculta() {
    var atual = paragrafo.style.display;
    if (atual === "none") {
        paragrafo.style.display = "block";
    } else {
        paragrafo.style.display = "none";
    }
}
