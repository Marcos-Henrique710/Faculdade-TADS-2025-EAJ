async function fetchData(apiUrl) {
  try {
    // Faz a requisição à API
    const response = await fetch(apiUrl);

    // Verifica se a resposta foi bem-sucedida
    if (!response.ok) {
      throw new Error(
        `Erro na requisição: ${response.status} - ${response.statusText}`
      );
    }

    // Converte os dados para JSON
    const data = await response.json();

    // Retorna os dados obtidos
    return data;
  } catch (error) {
    // Exibe erros no console
    console.error("Erro ao buscar os dados:", error);
    throw error; // Propaga o erro para ser tratado posteriormente
  }
}

// Exemplo de uso
const apiEndpoint = "https://api.sampleapis.com/coffee/hot"; // Substitua pelo URL da API desejada

fetchData(apiEndpoint)
  .then((data) => {
    console.log("Dados obtidos da API:", data);
    for (let card of data) {
      createCard(card);
    }
  })
  .catch((error) => {
    console.error("Erro durante a obtenção dos dados:", error);
  });

/*
// Dados fornecidos
const jsonData = {
  title: "Black Coffee",
  description:
    "Svart kaffe är så enkelt som det kan bli med malda kaffebönor dränkta i hett vatten, serverat varmt. Och om du vill låta fancy kan du kalla svart kaffe med sitt rätta namn: café noir.",
  ingredients: ["Coffee"],
  image:
    "https://images.unsplash.com/photo-1494314671902-399b18174975?auto=format&fit=crop&q=80&w=1887&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D",
  id: 1,
};
*/

// Função para criar o card
function createCard(data) {
  // Seleciona a div com id "root"
  const root = document.getElementById("root");

  // Cria a div principal do card
  const card = document.createElement("div");
  card.className = "card-style";

  // Adiciona a imagem
  const image = document.createElement("img");
  image.src = data.image;
  image.alt = data.title;
  image.className = "image-style";
  card.appendChild(image);

  // Adiciona o título
  const title = document.createElement("h3");
  title.textContent = data.title;
  title.className = "title-style";
  card.appendChild(title);

  // Adiciona a descrição
  const description = document.createElement("p");
  description.textContent = data.description;
  description.className = "description-style";
  card.appendChild(description);

  // Adiciona a lista de ingredientes
  if (data.ingredients && data.ingredients.length > 0) {
    const ingredientsTitle = document.createElement("h4");
    ingredientsTitle.textContent = "Ingredients:";
    ingredientsTitle.className = "ingredients-title-style";
    card.appendChild(ingredientsTitle);

    const ingredientsList = document.createElement("ul");
    ingredientsList.className = "ingredients-list-style";

    data.ingredients.forEach((ingredient) => {
      const ingredientItem = document.createElement("li");
      ingredientItem.textContent = ingredient;
      ingredientItem.className = "ingredient-item-style";
      ingredientsList.appendChild(ingredientItem);
    });

    card.appendChild(ingredientsList);
  }

  // Adiciona o card à div root
  root.appendChild(card);
}

// Executa a função para criar o card
//createCard(jsonData);
