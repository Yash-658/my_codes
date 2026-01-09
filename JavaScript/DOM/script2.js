// ________EXAMPLE1 <h1>________

// 1) CREATE THE ELEMENT
const newh1 = document.createElement("h1");
const new_a = document.createElement("a");

// 2) ADD PROPERTIES
newh1.textContent = "Halwa hai kya!";
newh1.style.color = "purple";
newh1.style.fontFamily = "monospace";

new_a.href = "https://www.google.com";
new_a.textContent = "google";

// 3) APPEND ELEMENT TO DOM 
// document.body.append(newh1);                        // to add it as the last child
// document.getElementById("box1").prepend(newh1);        // to add it as the first child

// To add it before a specific element/child~
document.body.insertBefore(newh1, box2);
document.body.insertBefore(new_a, box2);

// 4) REMOVE THE ELEMENT
// document.getElementById("box1").removeChild(newh1);

// -------------------------------------------------------------------------------------------------------
// eventListener = Listen for specific events to create interactive web pages events~
//                 events: click, mouseover, mouseout       (we use addEventListener(event, callback))

const myBox = document.getElementById("myBox");
myBox.addEventListener("mouseover", event => {
    event.target.style.backgroundColor = "rgba(222, 31, 203, 1)";     // instead of event.target we can also use document.elementById()
    event.target.textContent = "dhyan se! 😋";
});

myBox.addEventListener("mouseout", event => {
    myBox.style.backgroundColor = "antiquewhite";
    myBox.textContent = "dbao mujhe! 🤤";
});

myBox.addEventListener("click", event => {
    myBox.style.backgroundColor = "tomato";
    myBox.textContent = "ahhh! 🫠😫";
});