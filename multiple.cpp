#include<iostream>
using namespace std;
int an(int a1,int n,int d)
{
    return a1+(n-1)*d;
}
int sn(int n,int a1,int an)
{
    return n/2.0*(a1+an);
}
int main()
{
    int m;
    cin >> m;
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

    cout << s3+s5-s15;
}