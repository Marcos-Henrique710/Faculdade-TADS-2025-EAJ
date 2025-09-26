const canvas = document.getElementById('canvas');
const ctx = canvas.getContext('2d');

// centraliza o coração
const cx = canvas.width / 2;
const cy = canvas.height / 2;

// tamanho básico
const radius = 60;

// começa caminho
ctx.beginPath();

// arco esquerdo
ctx.arc(cx - radius/2, cy - radius/2, radius, 0, Math.PI, true);

// arco direito
ctx.arc(cx + radius/2, cy - radius/2, radius, 0, Math.PI, true);

// desce até a ponta inferior
ctx.lineTo(cx, cy + radius * 2);

// fecha forma
ctx.closePath();

// cor de preenchimento
ctx.fillStyle = "#e63946";
ctx.fill();

// contorno
ctx.strokeStyle = "#fff";
ctx.lineWidth = 2;
ctx.stroke();
