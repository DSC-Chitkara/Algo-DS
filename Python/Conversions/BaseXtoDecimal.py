import sys

n = input("Enter Any Number: ") #Number

base = int(input("Enter Base: ")) #Base X

dec = 0 #Resulatnt Decimal

exp = len(n)-1 #Exponent Value

#Character Set With Decimal Equivalent Value:

val = {'0': 0 , '1': 1 , '2': 2 , '3': 3 , '4': 4 , '5': 5 , '6': 6 , '7': 7 , '8': 8 , '9': 9 , 'A': 10 , 'B': 11 , 'C': 12 , 'D': 13 , 'E': 14 , 'F': 15}

#Looping Through All the characters of the number to calculate Decimal Equivalent:

for i in n: 
    if(i not in val.keys() or val[i]>base-1): 
        print("Error, Invalid Number!") #Exiting If Character is greater than or equal to base or not a valid character.
        sys.exit(0)
    dec = dec + val[i] * base ** exp
    exp = exp - 1

#Printing The Decimal Equivalent:
    
print("Decimal Value Is: " , dec)
