#iteratively
'''
inp = int(input("Enter the N number:"));
a = 0;
b = 1;
sum1=0;
print(0);
for i in range(1,inp):
    sum1=a+b;
    print(sum1);
    a = b;
    b = sum1;
'''
#recusively
'''
def recursive_fib(n):
    if(n==0):
        return 0;
    elif(n==1):
        return 1;
    else:
        return recursive_fib(n-1)+recursive_fib(n-2);
    
inp = int(input("Enter the N number:"));
ans = 0;
for i in range(0,inp):
    ans = recursive_fib(i);
    print(ans);
'''
