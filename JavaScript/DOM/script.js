// Element selectors = Methods used to target and manipulate HTML elements, they allow you to select one or multiple HTML elements
//                     they allow you to select one or multiple elements from the DOM

// 1. document.getElementById()       // ELEMENT OR NULL
// 2. document.getElementsByClassName() // HTML COLLECTION
// 3. document.getElementsByTagName() // HTML COLLECTION
// 4. docuement.querySelector()       // ELEMENT OR NULL     
// 5. document.querySelectorAll()     // NODELIST

const fruits = document.getElementsByClassName("fruits");

// console.log(fruits);

// for(let fruit of fruits) {
//     fruit.style.backgroundColor = "lightGreen";
// }

//can't use .forEach() method with fruits as its an HTML Collection and not an array, but we can typecast it into an array~
Array.from(fruits).forEach(fruit => {
    fruit.style.backgroundColor = "lightGreen";
})

const h4Elements = document.getElementsByTagName("h4");
const listItems = document.getElementsByTagName("li");

for(let h4 of h4Elements) {                 // can use for loop or .forEach(), totally on preference
    h4.style.backgroundColor = "Cyan";
}

for(let li of listItems) {
    li.style.backgroundColor = "orange";
}

// querySelector and querySelectorAll ka dekhlo ek baar aur https://youtu.be/lfmg-EJ8gm4?si=9KhyHYFb1wwivPQk, 
// basically querySelectorAll returns a NodeList which is different from an HTML COLLECTION as it has built-in methods like forEach() and 
// is static, that means its an snapshot of the DOM and HTML collections are live(The collection automatically updates if the DOM changes)
