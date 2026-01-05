let value = 0;

document.getElementById('decrease').onclick = function() {
    value--;
    document.getElementById('display').textContent = value;
}

document.getElementById('reset').onclick = function() {
    value = 0;
    document.getElementById('display').textContent = value;
}

document.getElementById('increase').onclick = function() {
    value++;
    document.getElementById('display').textContent = value;
}