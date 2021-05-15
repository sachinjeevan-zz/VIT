import java.util.*;
public class Matrix{
public static int min(int a,int b,int c)
{
  return a<b&&a<c?a:b<c?b:c;
}
public static void main(String[] args) {
  int n,m;
  Scanner sc = new Scanner(System.in);
  n = sc.nextInt();
  m = sc.nextInt();
  int[][] mat = new int[n][m];
  int[][] dp = new int[n][m];
  int max=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      mat[i][j] = sc.nextInt();
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
  System.out.print(max);
  
}
}