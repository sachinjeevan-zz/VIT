n = int(input())
summ = 2
a,b=0,2
c = 4*b+a
while(c<=n):
    summ+=c
    a=b
    b=c
    c=4*b+a
print(summ)