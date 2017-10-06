temp = raw_input("Please Enter a Binary number")
ques = temp[::-1]
count = 0
res = 0
flag = 0
for x in ques:
    res += int(x)*(2**count)
    count += 1
