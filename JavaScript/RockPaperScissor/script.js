let playerScore = 0, botScore = 0, choices = ["rock", "paper", "scissors"];

const pChoice = document.getElementById("playerChoice");
const bChoice = document.getElementById("botChoice");
const pScore = document.getElementById("pScore");
const bScore = document.getElementById("bScore");
const result = document.getElementById("result");


function play(playerChoice) {
    let won, botChoice = choices[Math.floor(Math.random()*3)];
    console.log(botChoice);

    if(botChoice === "rock" && playerChoice === "scissors") {
        won = "bot";
    }

    else if(botChoice === "scissors" && playerChoice === "paper") {
        won = "bot";
    }

    else if(botChoice === "paper" && playerChoice === "rock") {
        won = "bot";
    }

    else if(playerChoice  === "rock" && botChoice === "scissors") {
        won = "player";
    }

    else if(playerChoice === "paper" && botChoice === "rock") {
        won = "player";
    }

    else if(playerChoice === "scissors" && botChoice === "paper") {
        won = "player";
    }

    else{
        won = "tie";
    }

    // now updating DOM
    pChoice.textContent = `You chose: ${playerChoice}`;
    bChoice.textContent = `Bot chose: ${botChoice}`;

    switch(won) {
        case "tie":
            result.textContent = `IT'S A TIE!`;
            result.style.color = "blue";
            break;
        
        case "bot":
            result.textContent =  `BOT WON!`;
            result.style.color = "red";
            botScore++;
            break;
        
        case "player":
            result.textContent =  `YOU WON!`;
            result.style.color = "green";
            playerScore++;
            break;
    }

    pScore.textContent = `Player Score: ${playerScore}`;
    bScore.textContent = `Bot Score: ${botScore}`;
}