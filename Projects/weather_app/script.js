const input = document.getElementById('input');
const cityEl = document.getElementById('cityName');
const tempEl = document.getElementById('temp');
const humidityEl = document.getElementById('humidity');
const descriptionEl = document.getElementById('description');
const emojiEl = document.getElementById('emoji');

const mainEl = document.querySelector('main');
const APIkey = 'e41c207dcc7d60d90c5a3e3d0a19e476';

async function fetchData() {
    try {
        let city = input.value;
        let info = await fetch(`https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${APIkey}`);
        if (!info.ok) {
            throw new Error("Unable to fetch data!");
        }
        let infoObject = await info.json();
        displayData(infoObject);
    }
    catch (error) {
        console.error(error);
    }
}

function displayData(infoObject) {
    console.log(infoObject);
    console.log(infoObject.main.temp);
    const {name: cityName, main: {temp: tempData, humidity: humidityData}, weather: [{description, id}] } = infoObject;

    cityEl.textContent = cityName;
    tempEl.textContent = `${Math.floor(tempData-273.15)}°C`;
    humidityEl.textContent = `Humidity: ${humidityData}%`;
    descriptionEl.textContent = description;
   
    // now emoji according to the weatherID
    let emoji;
    if(id >= 200 && id < 300) emoji = '⛈️';
    else if(id >= 300 && id < 400) emoji = '🌧️';
    else if(id >= 500 && id < 600) emoji = '🌧️';
    else if(id >= 600 && id < 700) emoji = '❄️';
    else if(id >= 700 && id < 800) emoji = '🌁';
    else if(id>= 801 && id < 810) emoji = '☁️';
    else if(id===800) emoji = '☀️';
    else emoji = '❓'

    emojiEl.textContent = emoji;
    mainEl.style.display = 'flex';
}
