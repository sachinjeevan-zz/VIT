import math
n = int(input())
primes=[]
while(n%2==0):
    primes.append(2)
    n//=2
sqr = math.ceil(math.sqrt(n))
for d in range(3,sqr+1,2):
    while(n%d==0):
        primes.append(d)
        n//=d
if(n>1):
    primes.append(n)
print(*primes)