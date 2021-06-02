def an(a1,n,d):
    return a1+(n-1)*d
def sn(a1,n,an):
    return int(n/2*(a1+an))
m = int(input())
a1,d,n = 3,3,m//3
am = an(a1,n,d)
s3 = sn(a1,n,am)
a1,d,n = 5,5,m//5
am = an(a1,n,d)
s5 = sn(a1,n,am)
a1,d,n = 15,15,m//15
am = an(a1,n,d)
s15 = sn(a1,n,am)
print(s3+s5-s15)