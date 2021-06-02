string = input()
n = len(string)
dp =[]
for i in range(n):
    dp.append([0]*n)
    dp[i][i] = 1
i,j,k=0,1,1
while(k<n):
    if(string[i]==string[j]):
        dp[i][j] = dp[i+1][j-1]+2
    else:
        dp[i][j] = max(dp[i][j-1],dp[i+1][j])
    i+=1
    j+=1
    if(j==n):
        i=0
        k+=1
        j=k
print(dp[0][-1])