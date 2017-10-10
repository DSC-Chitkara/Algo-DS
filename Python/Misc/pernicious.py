'''This is a proposed brute force algorithm writtem in python 
to test whether a given input positive integer other than 1 and 2 
is a pernicious prime or not''' 

#OUTPUT FORMAT :- if pernicious prime , output yes else no 
#INPUT FORMAT  :- A positive integer other than 1 and 2  

'''According to number theory , a positive number is pernicious prime if 
sum of the digit of this number in binary form is prime'''

#################### Overall complexity is O(sqrt(n)*log(n))  ############################

import math


def isprime(num): #function to check whether a number is prime or not 
	if num<3 or num==3:
		return 1
	if num%2==0 or num%3==0:
		return 0
	for i in range(5,int(math.sqrt(num))+1,6):
		if num%i==0 or num%(i+2)==0:
			return 0
	return 1		########## O(sqrt(n))		

def count_ones(num): #function to calculate the number of set bits in a number 
	count=0
	while num:
		num = (num&(num-1))
		count+=1

	return count	########## O(log(n))

while 1:

	num = input("Enter any positive integer: ") #other than 1 and 2 
	if num!=1 and num!=2:

		total_set_bits = count_ones(num) #since sum of set bits is equivalent to counting those bits 
		print total_set_bits
		flag=isprime(total_set_bits)
		print flag
		if flag==1:
			print "yes\n"
		else:
			print "no\n"	
	else:
		print "Please enter any number other tha 1 or 2\n"
