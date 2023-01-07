// WAP to illustrate the concept of AND and OR operators


var fs = require('fs');
var inputLines = fs.readFileSync('input-node.txt').toString().split("\n").map(Number);
// for(i in inputLines) {
//     console.log(inputLines[i]);
// }

let a = inputLines[0];
let b = inputLines[1];

let c = a && b;
let d = a || b;

console.log("a AND b is:", c);
console.log("a OR b is:", d);
console.log(`The value of a is: ${a} and the value of b is: ${b}`);
