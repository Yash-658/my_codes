// ________EXAMPLE1 <h1> and <a>________

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
//                 events: click, mouseover, mouseout, keyup, keydown       (we use addEventListener(event, callback/arrow_fxn))

const myBox = document.getElementById("myBox");
myBox.addEventListener("mouseover", event => {

    event.target.style.backgroundColor = "rgba(222, 31, 203, 1)";     // instead of event.target we can also use document.elementById()
    myBox.textContent = "dhyan se! 😋";
});

myBox.addEventListener("mouseout", event => {
    myBox.style.backgroundColor = "antiquewhite";
    myBox.textContent = "dbao mujhe! 🤤";
    document.body.style.backgroundColor = "white";
});

myBox.addEventListener("click", event => {
    myBox.style.backgroundColor = "#F4AFB3";
    myBox.textContent = "ahhh! 🫠😫"; 
    document.body.style.backgroundColor = "#FF1D8D";
});

// --------------------KEY EVENTS--------------------------
const ourBox = document.getElementById('ourBox');

document.addEventListener("keydown", event => {        // this is to change color and textContent no matter what key is pressed
    ourBox.textContent = "🫠";
    // ourBox.style.backgroundColor = "lightgreen";
})

document.addEventListener("keyup", event => {
    ourBox.textContent = "😋";
    // ourBox.style.backgroundColor = "aquamarine";
})

let x = 0, y = 0, moveAmount = 10;

document.addEventListener("keydown", (event) => {
    // console.log(event.key);

    event.preventDefault();        // this is used so that the arrow up and down keys doesn't do the default scrolling behaviour

    if(event.key == 'ArrowUp' && y > 0) {
        y -= moveAmount;
    }

    if(event.key == 'ArrowDown') {
        y += moveAmount;
    }

    if(event.key == 'ArrowLeft' && x > 0) {
        x -= moveAmount;
    }

    if(event.key == 'ArrowRight') {
        x += moveAmount;
    }

    ourBox.style.top =`${y}px`;
    ourBox.style.left = `${x}px`;
})

