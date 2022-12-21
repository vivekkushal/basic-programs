var fs = require('fs');
var inputLines = fs.readFileSync('input-node.txt').toString().split("\n").map(Number);
// for(i in inputLines) {
//     console.log(inputLines[i]);
// }

// First line integer 't' is the number of test cases
let t = inputLines[0];

if (t >= 0) {
    // Loop for taking test cases
    while (t--) {
        // Next line integers 'input' are the individual inputs
        let input = inputLines[inputLines[0] - t];

        if (input > 0) {
            for( let i = 1; i <= input; i++) {
				let str = "";
				for (let j = 1; j <= i; j++) {
					str += "*"
				}
				console.log(str);
			}
        } else {
            console.log("Inputs should be +ve");
        }
    }
} else {
    console.log("Number of test cases should not be -ve");
}