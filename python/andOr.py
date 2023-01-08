userInput = open("input1.txt", "r")
# variable = int(userInput.readline()) - will give input as integer line by line
################### Write code below this #################

a = int(userInput.readline())
b = int(userInput.readline())

c = a and b
d = a or b

print("a AND b is:", c)
print("a OR b is:", d)
# console.log(`The value of a is: ${a} and the value of b is: ${b}`);
print(f"The value of a is: {a} and the value of b is: {b}")

################### Write code above this #################
userInput.close()
