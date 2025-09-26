let canvas = document.getElementById("Canvas");
let ctx = canvas.getContext("2d");
ctx.beginPath();

ctx.strokeStyle = "rgba(255, 0, 0, 1)";
ctx.moveTo(0, 0);
ctx.lineTo(200, 100);
ctx.closePath();
ctx.stroke();
ctx.beginPath();

ctx.strokeStyle = "rgb(0, 0, 200)";
ctx.moveTo(250, 250);
ctx.lineTo(200, 200);
ctx.closePath();
ctx.stroke();
ctx.beginPath();

ctx.strokeStyle = "rgba(0, 255, 0, 1)";
ctx.moveTo(200, 200);
ctx.lineTo(0, 200);
ctx.closePath();
ctx.stroke();

ctx.strokeStyle = "rgba(0, 0, 0, 1)";
ctx.moveTo(150, 950);
ctx.lineTo(150, 0);
ctx.closePath();
ctx.stroke();
