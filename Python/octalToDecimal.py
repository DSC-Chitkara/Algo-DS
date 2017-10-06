octal = input("Enter the number in octal format: ")
octal_length = len(octal)
for digit in octal:
	decimal = str(int(octal, 8))
print(decimal)
