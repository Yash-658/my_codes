const inputArea = document.getElementById('input');
const display = document.getElementById('displayArea');

function roll() {
    let input = Number(inputArea.value);
    let randoms = [];
    while(input > 0) {
        let random = Math.floor(Math.random()*6)+1;
        randoms.push(random);
        input--;
    }

    let result = ``;
    for(let random of randoms) {
        result += `<img class='result' src="images/${random}.png">`;
    }
    console.log(result);
    display.innerHTML = result;
}