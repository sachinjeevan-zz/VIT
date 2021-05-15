#include<iostream>
using namespace std;
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
            dp[i][j]=0;
            if(i==j){ dp[i][j]=1;}
        }
    }
    int i=0,j=1,k=1;
    while(k<n)
    {
        if(str[i]==str[j]){ 
            dp[i][j] = dp[i+1][j-1]+2;
            }
        else { 
            dp[i][j] = dp[i][j-1]>dp[i+1][j]?dp[i][j-1]:dp[i+1][j];
            }
            i++;
            j++;
            if (j==n)
            {
                i=0;
                k++;
                j=k;
            }
    }
    cout << dp[0][n-1];
}