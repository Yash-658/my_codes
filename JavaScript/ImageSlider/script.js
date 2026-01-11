const images = ["images\\2151138941.jpg", "images\\2151955582.jpg", "images\\2151955588.jpg"];
const image = document.getElementById("image");
let pos = 0;

let autoChange = setInterval(() => {
    change("auto")
}, 2000);

function change(request) {
    if(request !== "auto") clearInterval(autoChange);
    if(request === "previous") {
        if(pos === 0) {
            pos = 2;
        }

        else{
            pos--;
        }
    }

    else{
        if(pos === 2) {
            pos = 0;
        }

        else{
            pos++;
        }
    }

    image.src = images[pos];
}
