/*

This doesn't handle amount = 0 well rn~

*/


let balance = 0.0, income = 0.0, expense = 0.0;

const descriptionEl = document.getElementById("description");
const amountEl = document.getElementById("amount");

const balanceEl = document.getElementById("balance");
const incomeEl = document.getElementById("income");
const expensesEl = document.getElementById("expenses");

function add() {

    let amount = parseFloat(amountEl.value);
    let description = descriptionEl.value;
    console.log(amount);
    // check input
    if(amount === 0 || amount === NaN) {
        // won't work for 0
        return;
    }

    // adding new dialog box
    createDialog(description, amount);
    
    // updating balance, income, and expenses~
    if(amount > 0) {   
        income += amount;
    }

    else {
        expense += amount*-1;
    }

    balance += amount;
    
    // updating UI
    balanceEl.textContent = `$${balance.toFixed(2)}`;
    incomeEl.textContent = `$${income.toFixed(2)}`;
    expensesEl.textContent = `$${expense.toFixed(2)}`;

    amountEl.value = "";
    descriptionEl.value = "";
}

function createDialog(description, amount) {
    const newDialog = document.createElement("div");
    const p1 = document.createElement("p");
    const p2 = document.createElement("p");

    p1.textContent = description;
    p2.textContent = `$${amount.toFixed(2)}`;
    
    if(amount > 0) {
        newDialog.classList.add('increase');
    }

    else{
        newDialog.classList.add('decrease');
    }

    newDialog.append(p1);
    newDialog.append(p2);
    document.getElementById('transaction_list').append(newDialog);
}