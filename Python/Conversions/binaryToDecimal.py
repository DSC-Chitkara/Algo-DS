while True:
    print("Please Enter a Binary number or Type EXIT to exit")
    temp = raw_input()
    if(temp != "EXIT"):
        ques = temp[::-1]
        count = 0
        res = 0
        flag = 0
        for x in ques:
            if(int(x)>1):
                print("Invalid. Enter a binary number")
                flag = 1
                break
            res += int(x)*(2**count)
            count += 1
        if not flag:
            print res
    else:
        break
print ("End of program")
