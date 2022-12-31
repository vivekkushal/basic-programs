userInput = open("input1.txt", "r")
output = open("output1.txt", "w")
################### Write code below this #################

# First line integer 't' is the number of test cases
t = int(userInput.readline())


if t >= 0:
    # Loop for taking test cases
	while t > 0:
        # Next line integers 'input' are the individual inputs
		input = int(userInput.readline())

		if input > 0:
			for x in range(1, input + 1):
				str = ""
				for y in range(1, x + 1):
					str += "*"
				output.write(str + "\n")
		else:
			output.write("Inputs should be +ve")
		t = t - 1
else:
	output.write("Number of test cases should not be -ve")


################### Write code above this #################
userInput.close()
output.close()
