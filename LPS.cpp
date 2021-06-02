#include<iostream>
using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    int dp[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) dp[i][j]=1;
            else dp[i][j] = 0;
        }
    }
    int i=0,j=1,k=1;
    while(k<n)
    {
        if(str[i]==str[j])
        {
            dp[i][j] = dp[i+1][j-1]+2;
        }
        else
        {
            dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
        }
        i++;
        j++;
        if(j==n)
        {
            k++;
            i=0;
            j = k;
        }
    }
    cout << dp[0][n-1];
}