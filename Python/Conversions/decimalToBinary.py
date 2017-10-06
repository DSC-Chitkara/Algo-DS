num = input("Please enter a decimal number")
temp = ""
while num>0:
    temp += str(num%2)
    num = num/2
res = int(temp[::-1])
print res
