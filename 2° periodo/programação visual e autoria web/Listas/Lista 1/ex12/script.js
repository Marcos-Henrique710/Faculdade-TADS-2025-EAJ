const form = document.getElementById('searchForm');
const input = document.getElementById('query');
const status = document.getElementById('status');
const content = document.getElementById('content');
const originalText = document.getElementById('text').textContent + '\n' + Array.from(content.querySelectorAll('p')).slice(1).map(p=>p.textContent).join('\n\n');

function escapeRegExp(string){
return string.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
}
function escapeHtml(str){
return str.replace(/&/g,'&amp;').replace(/</g,'&lt;').replace(/>/g,'&gt;').replace(/"/g,'&quot;').replace(/'/g,'&#039;');
}
function performSearch(){
const q = input.value.trim();
if(!q){
renderText(originalText);
status.textContent = '';
return;
}

const escaped = escapeRegExp(q);
const regex = new RegExp('\\b(' + escaped + ')\\b','gi');
const safe = escapeHtml(originalText);
let count = 0;
const replaced = safe.replace(regex, function(match){
count++;
return '<span class="highlight">' + match + '</span>';
});


if(count === 0){
renderText(safe);
status.textContent = 'Nenhum resultado encontrado para "' + q + '".';
} else {

const paragraphs = replaced.split('\n\n').map(p => '<p>' + p.replace(/\n/g,'<br>') + '</p>').join('\n\n');
content.innerHTML = paragraphs;
status.textContent = count + (count === 1 ? ' ocorrência encontrada.' : ' ocorrências encontradas.');
}
}
function renderText(text){
const paragraphs = escapeHtml(text).split('\n\n').map(p => '<p>' + p.replace(/\n/g,'<br>') + '</p>').join('\n\n');
content.innerHTML = paragraphs;
}
renderText(originalText);

form.addEventListener('submit', function(e){
e.preventDefault();
performSearch();
});
