/*
JSON: (JavaScript Object Notation) data-interchaneg format used for exchanging data 
    between a server and a web app, 
    JSON files {key:value} OR [value1, value2, value3]

    JSON.stringify() = coverts a JS object to a JSON string.
    JSON.parse() = converts a JSON string to a JS object.
    .json() = method is used to parse JSON-formatted data into a native object.
*/

/*
Fetch = Function used for making HTTP requests to fetch resources. (JSON style data, images, files)
Simplifies asynchronous data fetching in JavaScript and 
used for interacting with APIs to retrieve and send data asynchronously over the web.
    format: fetch(url, {options})
*/ 

// for fetching from a local JSON file~

// fetch("people.json")
//     .then(response => {
//         if (!response.ok) throw new Error("Failed to fetch data!");
//         return response.json();
//     })
//     .then(values => values.forEach(value => console.log("name: " + value.name)))
//     .then(() => console.log("Completed Successfully!"))
//     .catch(error => console.error(error))

// for fetching from a pokemon api, and using async/await instead of .then()

const input = document.getElementById("input");
const imgEl = document.getElementById("imgEl");

async function fetchPokemon() {
    try {
        const response = await fetch(`https://pokeapi.co/api/v2/pokemon/${input.value.toLowerCase()}`);

        if (!response.ok) {
            alert("Please enter a valid pokemon name!");
            input.value = "";
            throw new Error("Failed to fetch resources!");
        }

        const data = await response.json();
        // console.log(data.name);
        imgEl.src = data.sprites.front_default;
        imgEl.style.display = "block";
    }
    catch (error) {
        console.error(error);
    }
}

