// ________EXAMPLE1 <h1>________

// 1) CREATE THE ELEMENT
const newh1 = document.createElement("h1");

// 2) ADD PROPERTIES
newh1.textContent = "Halwa hai kya!";
newh1.style.color = "purple";
newh1.style.fontFamily = "monospace";

// 3) APPEND ELEMENT TO DOM 
// document.body.append(newh1);                        // to add it as the last child
document.getElementById("box1").prepend(newh1);        // to add it as the first child

// 4) REMOVE THE ELEMENT
document.getElementById("box1").removeChild(newh1);