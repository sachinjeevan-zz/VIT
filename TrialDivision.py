import math
n = int(input())
sqr = int(math.sqrt(n))
prime_factor = []
for d in range(2,sqr+1):
    while(n%d==0):
        prime_factor.append(d)
        n//=d
if(n>1):
    prime_factor.append(n)
print(*prime_factor)