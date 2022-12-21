function printStarPattern(input) {
	if (input > 0) {
		for( let i = 1; i <= input; i++) {
			let str = "";
			for (let j = 1; j <= i; j++) {
				str += "*"
			}
			console.log(str);
		}
	} else {
		console.log("Input should be +ve");
	}
}

printStarPattern(5);