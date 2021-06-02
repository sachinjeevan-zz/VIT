import java.util.*;
public class LPS
{
  public static void main(String[] args) {
    String str;
    Scanner sc = new Scanner(System.in);
    str = sc.nextLine();
    int n = str.length();
    int dp[][] = new int[n][n];
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
        if(str.charAt(i)==str.charAt(j))
        {
            dp[i][j] = dp[i+1][j-1]+2;
        }
        else
        {
            dp[i][j] = Math.max(dp[i][j-1],dp[i+1][j]);
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
    System.out.print(dp[0][n-1]);
  }
}