# Python Program to Reverse a Number using Functions

def Reverse_Integer(num):
    rev = 0
    sign = 1
    if num < 0:
        num = -num
        sign = -1
    while(num > 0):
        rem = num %10
        rev = (rev *10) + rem
        num = num //10
    return rev*sign

num = int(input("Please Enter any Number: "))
rev = Reverse_Integer(num)
print("\n Reverse of entered number is = %d" %rev)

#An example to demonstrate above mentioned apporach:
# num = 123
# First iteration:
  # rem = 3 (123%10 = 3)
  # rev = 3 (0*10 + 3 = 3)
  # num = 12 (123/10 = 12)

#Second interation:
  # rem = 2 (12%10 = 2)
  # rev = 32 (3*10+2 = 32)
  # num = 1 (12/10 = 1)

#Third interation:
  # rem = 1 (1%10 = 1)
  # rev = 321 (32*10+1 = 321)
  # num = 0 (1/10 = 0)
  
# end of while loop (since num=0)
# hence Reverse of 123 is 321

