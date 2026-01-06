const inputField = document.getElementById('input');
const cel_to_far = document.getElementById('cel_to_far');
const far_to_cel = document.getElementById('far_to_cel');
const resultField = document.getElementById('result');

let convertedValue;
let symbol;
function convert() {
    if(inputField.value == "") {
        window.alert("Please enter an appropriate value to convert"); 
        return;
    }

    if(cel_to_far.checked){
        convertedValue = (Number(inputField.value)*1.8)+32;
        symbol = '°F';
    }

    else if(far_to_cel.checked){
        convertedValue = (Number(inputField.value)-32)*(0.55);
        symbol = '°C';
    }

    else{
        window.alert("Please select one of the options.")
    }

    resultField.textContent = `The Result is: ${convertedValue.toFixed(2)+symbol}`;
}