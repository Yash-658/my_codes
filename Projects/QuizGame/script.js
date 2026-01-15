const startScreen = document.getElementById('intro_screen');
const questionScreen = document.getElementById('question_screen');
const resultScreen = document.getElementById('result_screen');

const questionEl = document.getElementById('question');
const q_numEl = document.getElementById('q_number');
const curr_scoreEl = document.getElementById('curr_score');
const op_1El = document.getElementById('option1')
const op_2El = document.getElementById('option2')
const op_3El = document.getElementById('option3')
const op_4El = document.getElementById('option4')
const optionsEl = [op_1El, op_2El, op_3El, op_4El];
const progressEl = document.getElementById('progress');

const scoresEl = document.getElementById('scores');
const feedbackEl = document.getElementById('feedback');

const questions = ['In what year did India gain independence?', 'Which building in India is a UNESCO World Heritage Site?',' What is the largest lake in the world?','Which of the following planets is not a gas giant?'];
const options = [['1942','1945','1947','1950'],['Red Fort','Hawa Mahal','Qutub Minar','Taj Mahal'],['Caspian Sea','Baikal','Lake Superior','Ontario'],['Uranus','Saturn','Jupiter','Mars']];
const correctOptions = ['3','4','2','4'];
const feedbacks = ["Don't worry, you will get there!", "Good effort! Keep learning", "Got all of 'em! Excellent work!"];

let qNum = 0, score = 0, opr = false;
function start() {      // start button 
    startScreen.style.display = 'none';
    showQuestion();
    questionScreen.style.display = 'flex';
}

function showQuestion() {
    // now if qNum = 4, change to result screen
    if(qNum === 4) {
        questionScreen.style.display = 'none';
        showResult();
        resultScreen.style.display = 'flex';
        return;
    }

    q_numEl.textContent = `Question ${qNum+1} of 4`;
    curr_scoreEl.textContent = `Score: ${score}`;
    questionEl.textContent = questions[qNum];
    for(let i = 0; i < 4; i++) {
        optionsEl[i].textContent = options[qNum][i];
    }
}

function getAnswer(option) {      // after an option is selected 
    if(opr === true) return;
    opr = true;
    
    if(correctOptions[qNum] == option) {
        // answer is right, increase score and change appearance of the correct Option
        score++;
        optionsEl[option - 1].classList.add('right_option');
    }

    else {
        optionsEl[option - 1].classList.add('wrong_option');
        optionsEl[correctOptions[qNum] - 1].classList.add('right_option');
    }

    qNum++;
    setProgress();

    setTimeout(() => {
        showQuestion();
        optionsEl[correctOptions[qNum - 1] - 1].classList.toggle('right_option');
        if(correctOptions[qNum - 1] != option) {
            optionsEl[option - 1].classList.toggle('wrong_option');
        }
        opr = false;
    }, 2000);
}

function setProgress() {
    let progress = (qNum)*25;
    progressEl.style.width = `${progress}%`;
}

function showResult() {     // to show result after all the answers
    scoresEl.textContent = `You scored ${score} out of 4`;
    if(score <= 1) {
        feedbackEl.textContent = feedbacks[0];
    } else if(score <= 3) {
        feedbackEl.textContent = feedbacks[1];
    } else {
        feedbackEl.textContent = feedbacks[2];
    }

    qNum = 0;
    score = 0;
}

function restart() {        // to restart the quiz
    window.location.reload();
}