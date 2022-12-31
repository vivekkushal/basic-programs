def printStarPattern(num):
	for x in range(1, num + 1):
		str = ""
		for y in range(1, x + 1):
			str += "*"
		print(str)

printStarPattern(6)