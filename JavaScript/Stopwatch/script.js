let timer;
let startTime = 0;
let elapsedTime = 0;
let isRunning = false;

const display = document.getElementById('display');

function start(){
    if(!isRunning){
        startTime = Date.now() - elapsedTime;
        timer = setInterval(update, 10);
        isRunning = true;
    }
}

function stop(){
    if(isRunning) {
        clearInterval(timer);
        isRunning = false;
    }
}

function reset(){
    clearInterval(timer);
    startTime = 0;
    elapsedTime = 0;
    isRunning = false;
    display.textContent = "00:00:00:00";
}

function update(){
    elapsedTime = Date.now() - startTime;

    let hours = Math.floor(elapsedTime/3600000);
    let minutes = Math.floor((elapsedTime/60000)%60);
    let seconds = Math.floor((elapsedTime/1000)%60);
    let ms = Math.floor(elapsedTime%1000/10);

    hours = String(hours).padStart(2,"0");
    minutes = String(minutes).padStart(2,"0");
    seconds = String(seconds).padStart(2,"0");
    ms = String(ms).padStart(2,"0");

    display.textContent = `${hours}:${minutes}:${seconds}:${ms}`;
}