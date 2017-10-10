'''This is a proposed brute force algorithm writtem in python 
to test whether a given input positive integer other than 1 and 2 
is a pernicious prime or not''' 

#OUTPUT FORMAT :- if pernicious prime , output yes else no 
#INPUT FORMAT  :- A positive integer other than 1 and 2  

'''According to number theory , a positive number is pernicious prime if 
sum of the digit of this number in binary form is prime'''


def binary(num):#thisfunction coverts decimalnumber into its binary equivalent form 
	base=1
	binary=0
	while num>0:
		rem=num%2
		binary=binary+rem*base
		num=num/2
		base=base*10

	return binary

def ones(binary): #this function would calculates all set bits in binary number
	count=0
	while binary!=0:
		if binary%10==1:
			count+=1
		binary=binary/10
	return count

f=0
num = input("Enter any positive integer: ") #other than 1 and 2 
if num!=1 and num!=2:

	d = binary(num)			
	o = ones(d)
	for i in range(2,o/2+1):
		if 0%i==0:
			f=1
		break
	if f!=1 and num!=1:
		print "yes\n"
	elif f==1:
		print "no\n"
else:
	print "Please enter any number other tha 1 or 2\n"