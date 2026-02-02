require('dotenv').config()

const express = require('express')
const app = express()

app.get('/', (req, res) => {     // get method: “When a GET request comes to this URL, run this function and send a response.”
  res.send('Hello World!')
})

app.get('/twitter', (req, res) => {
  res.send(`<h1> HALWA HAI KYA </h1>`)
}) 

app.get('/login', (req, res) => {
  res.send('<h2> please login at chai and yass <h2>')
})

app.listen(process.env.PORT, () => {
  console.log(`Example app listening on port ${process.env.PORT}`)
})
