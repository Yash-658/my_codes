/*

isko local storage mai save rkhne ke liye update kro, watch full project video https://youtu.be/kAiX0itnonM?si=FvZS92LIZDTuF25E&t=7618
this doesn't handle amount = 0 well rn~

*/

const descriptionEl = document.getElementById("description");
const amountEl = document.getElementById("amount");

const balanceEl = document.getElementById("balance");
const incomeEl = document.getElementById("income");
const expensesEl = document.getElementById("expenses");
const transactionListEl = document.getElementById("transaction_list");

let transactions = JSON.parse(localStorage.getItem("transactions")) || [];

function add() {

    let amount = parseFloat(amountEl.value);
    let description = descriptionEl.value;

    // check input
    if(amount === 0 || amountEl.value === "") {
        // won't work for 0
        return;
    }

    transactions.push({
        id: Date.now(),
        description: description,
        amount: amount
    });

    localStorage.setItem("transactions", JSON.stringify(transactions));

    // updating transaction list~
    updateTransactionList();
    
    // updating balance, income, and expenses~
    updateSummary();

    amountEl.value = "";
    descriptionEl.value = "";
}

function updateTransactionList() {
    transactionListEl.innerHTML = "";

    const sortedTransactions = [...transactions].reverse();
    
    sortedTransactions.forEach((transaction) => {
        const transactionEl = createElement(transaction);
        transactionListEl.append(transactionEl);
    })
}

function createElement(transaction) {
    const newDialog = document.createElement("div");

    let description = transaction.description;
    let amount = transaction.amount;

    newDialog.innerHTML = `
    <span>${description}</span>
    <span>
    $${Math.abs(amount).toFixed(2)}
    <button class="delete-btn" onclick="removeElem(${transaction.id})">x</button>
    </span>`;
    
    newDialog.classList.add(amount > 0 ? "increase" : "decrease");

    return newDialog;
}

function updateSummary() {
  // 100, -50, 200, -200 => 50
  const balance = transactions.reduce((acc, transaction) => acc + transaction.amount, 0);

  const income = transactions
    .filter((transaction) => transaction.amount > 0)
    .reduce((acc, transaction) => acc + transaction.amount, 0);

  const expenses = transactions
    .filter((transaction) => transaction.amount < 0)
    .reduce((acc, transaction) => acc + transaction.amount, 0);

  // update ui
  balanceEl.textContent = balance.toFixed(2);
  incomeEl.textContent = income.toFixed(2);
  expensesEl.textContent = expenses.toFixed(2);
}

function removeElem(id) {
  // filter out the one we wanted to delete
  transactions = transactions.filter((transaction) => transaction.id !== Number(id));

  localStorage.setItem("transactions", JSON.stringify(transactions));

  updateTransactionList();
  updateSummary();
}

// initial render, zruri hai so that when we refresh UI same dikhe
updateTransactionList();
updateSummary();