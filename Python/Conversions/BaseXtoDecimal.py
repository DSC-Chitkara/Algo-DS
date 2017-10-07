import sys
n = input("Enter Any Number: ")
base = int(input("Enter Base: "))
dec = 0
exp = len(n)-1
val = {'0':0,'1':1,'2':2,'3':3,'4':4,'5':5,'6':6,'7':7,'8':8,'9':9,'A':10,'B':11,'C':12,'D':13,'E':14,'F':15}
for i in n:
    if(i not in val.keys() or val[i]>base-1):
        print("Error, Invalid Number!")
        sys.exit(0)
    dec = dec + val[i] * base ** exp
    exp = exp - 1
print("Decimal Value Is: ",dec)
    
