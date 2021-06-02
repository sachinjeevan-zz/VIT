import math
n = int(input())
primes=[]
sqr = math.ceil(math.sqrt(n))
arr = list(range(0,sqr+1))
arr[0]=arr[1]=0
i=2
while(i*i<=sqr):
    if(arr[i]!=0):
        for j in range(i*i,sqr+1,i):
            arr[j]=0
    i+=1
arr = list(filter(lambda x: x!=0,arr))
for i in range(len(arr)):
    while(n%arr[i]==0):
        primes.append(arr[i])
        n//=arr[i]
if(n>1):
    primes.append(n)
print(*primes)