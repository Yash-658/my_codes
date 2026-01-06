const inputArea = document.getElementById('input');
const display = document.getElementById('displayArea');

function roll() {
    let input = Number(inputArea.value);
    let result = ``;
    while(input > 0) {
        let random = Math.floor(Math.random()*6)+1;
        result += `<img class='result' src="images/${random}.png">`;
        input--;
    }

    display.innerHTML = result;
}