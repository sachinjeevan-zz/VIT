#include <iostream>
using namespace std;
int min(int a,int b,int c)
{
  return a<b&&a<c?a:b<c?b:c;
}
int main() {
  int n,m;
  cin >> n >> m;
  int mat[n][m],dp[n][m],max=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin >> mat[i][j];
      if(i==0 || j==0)
      {
        dp[i][j] = mat[i][j];
      }
      else{
        if(mat[i][j]==1)
        {
           dp[i][j]= min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])+1;
           if(dp[i][j]>max) max = dp[i][j];
        }
        else{
          dp[i][j] = mat[i][j];
        }
      }
    }
  }
  cout << max;
  
}