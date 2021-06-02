import java.util.*;
public class multiple {
    public static int an(int a1,int n,int d)
    {
        return a1+(n-1)*d;
    }
    public static int sn(int n,int a1,int an)
    {
        return (int)(n/2.0*(a1+an));
    }
    public static void main(String[] args) {
        int m;
        Scanner sc = new Scanner(System.in);
    m = sc.nextInt();
    int a1,am,n,d;
    a1=3;
    d=3;
    n=m/3;
    am = an(a1,n,d);
    int s3 = sn(n,a1,am); 

    a1=5;
    d=5;
    n=m/5;
    am = an(a1,n,d);
    int s5 = sn(n,a1,am); 

    a1=15;
    d=15;
    n=m/15;
    am = an(a1,n,d);
    int s15 = sn(n,a1,am); 
    System.out.print(s3+s5-s15);
    }
}
