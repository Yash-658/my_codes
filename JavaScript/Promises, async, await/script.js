/* Callback Hell: 
Situation in JS where callbacks are nested within other callbacks 
to the degree where the code is difficult to read.
Modern techs include Promises + async/await to avoid callback hell.

Promises: A Promise in JavaScript is an object representing the eventual completion 
or failure of an asynchronous operation and its resulting value.
It acts as a placeholder for a value that may not be available yet,
but will be at some point in the future.

new Promise((resolve, reject) => {asynchronous code})

DO THESE CHORES:
1) Walk the dog
2) Clean the kitchen
3) Take out the trash
*/

function walkDog() {
    return new Promise((resolve, reject) => {
        const dogWalked = true;

        setTimeout(() => {
           if(dogWalked) resolve("You walked the dog!");
           else reject("You didn't walk the dog!");
        },1500)
    })
}

function cleanKitchen() {
    return new Promise((resolve, reject) => {
        const kitchenCleaned = false;

        setTimeout(() => {
            if(kitchenCleaned) resolve("You cleaned the kitchen!");
            else reject("You didn't clean the kitchen!");
        },2000)
    })
}

function takeOutTrash() {
    return new Promise((resolve, reject) => {
        const tookTrash = true;

        setTimeout(() => {
            if(tookTrash) resolve("You took out the trash!");
            else reject("You didn't take the trash!");
        },500)
    })
}

walkDog().then((value) => {console.log(value); return cleanKitchen();})
         .then((value) => {console.log(value); return takeOutTrash();})
         .then((value) => {console.log(value); console.log("All chores are completed!");})

