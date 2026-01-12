/*
JSON: (JavaScript Object Notation) data-interchaneg format used for exchanging data 
    between a server and a web app, 
    JSON files {key:value} OR [value1, value2, value3]

    JSON.stringify() = coverts a JS object to a JSON string.
    JSON.parse() = converts a JSON string to a JS object.
    .json() = method is used to parse JSON-formatted data into a native object.
*/

function fetching() {
    return new Promise((resolve, reject) => {
    
            fetch("people.json")
                .then(response => response.json())
                .then(values => {
                    values.forEach(value => console.log("name: " + value.name))})
                .then(resolve("Completed succesfully!"))
        
    })
}

async function opr() {
    const status = await fetching();
    console.log(status);
}

opr();