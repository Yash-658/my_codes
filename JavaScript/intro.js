/*
well, JS prmitive data-types~

Type	            Description	                        Example
Number	            Any numeric value	                42, 3.14, -10
String	            Sequence of characters	            "hello", 'JS'
Boolean	            Logical value	                    true, false
Undefined	Variable declared but not assigned	        let x; // x is undefined
Null	    Explicitly no value	let x = null;
BigInt	    Large integers beyond max	                12345678901234567890n
Symbol	    Unique identifiers (used for object keys)	Symbol('id')

-> Type of null is "object"
-> default value of variables in JS is undefined
*/

// let naam = "Yash";
// console.log(naam);
// console.log(typeof naam);

// creating a person object~
let person = {
    naam: 'Yash',
    age: 30
};

// dot notation~
person.naam = 'Noah';
// console.log(person.naam);

// bracket notation for accessing object members~
// let selection = naam;
// person[selection] = "raju";
// console.log(person.naam);

// initialising an array~   (here, array is an object. Length of arr is variable and can store elements of diff datatypes)
let selectedColors = ['red', 'blue'];
// console.log(selectedColors[0]);

selectedColors[2] = '1';
// console.log(selectedColors);


// as JS is a dynamic lang, the type of vars can change at runtime, so length of array as well type of objects in array can change~
    
// FUNCTIONS~
function greet(name) {                  // name is a parameter, bhayyyyy is a argument
    console.log("ellooo " + name);
}

function square(number) {
    return number*number;
}

// greet("bhayyyyy");
let a = square(2);
// console.log(a);

// console.log(square(2));


function evenOrOdd(number) {
    if(number&1) {
        console.log(number + ' is odd');
    }
    
    else {
        console.log(number + ' is even');
    }
}
// evenOrOdd(6);

function maxOfThree(num1, num2, num3) {
    console.log(Math.max(num1, num2, num3));
}

// maxOfThree(15, 20, 99);

for(let i = 0; i <= 10; i++) {
    console.log(i);
}