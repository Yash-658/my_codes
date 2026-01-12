/*
JSON: (JavaScript Object Notation) data-interchaneg format used for exchanging data 
    between a server and a web app, 
    JSON files {key:value} OR [value1, value2, value3]

    JSON.stringify() = coverts a JS object to a JSON string.
    JSON.parse() = converts a JSON string to a JS object.
    .json() = method is used to parse JSON-formatted data into a native object.
*/


fetch("people.json")
    .then(response => response.json())
    .then(values => values.forEach(value => console.log("name: " + value.name)))
    .then(() => console.log("Completed Successfully!"))