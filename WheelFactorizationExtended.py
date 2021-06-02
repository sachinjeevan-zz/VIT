import math
n = int(input())
primes=[]
arr=[2,3,5]
for i in range(3):
    while(n%arr[i]==0):
        primes.append(arr[i])
        n//=arr[i]
sqr = math.ceil(math.sqrt(n))
arr=[4,2,4,2,4,6,2,6]
d=7
i=0
while(d<=sqr):
    while(n%d==0):
        primes.append(d)
        n//=d
    d+=arr[i]
    i+=1
    if(i==8):
        i=0
if(n>1):
    primes.append(n)
print(*primes)