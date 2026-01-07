const display = document.getElementById('display');
let exp = "";

function appendToDisplay(value) {
    if(value === "del") {
        exp = exp.slice(0,-1);
    }

    else if(value === "CE") {
        exp = "";
    }

    else if(value === "=") {
        try{
            exp = eval(exp);
            exp = String(exp);
        }

        catch(error) {
            console.error(error);
        }
    }

    else {
        let lastChar = exp[exp.length-1];
        const arr = "+-*/.";

        if(!(arr.includes(lastChar) && arr.includes(value))){
            exp += value;
        }
    }

    display.value = exp;
}