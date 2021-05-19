#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int n)
{
    if(n<=1) return 0;
    else if(n>3 && (n%2==0 || n%3==0)) return 0;
    int k=1;
    int a=6*k-1,b=6*k+1;
    int sqr = sqrt(n);
    while(a<=sqr || b<=sqr)
    {
        if(n%a==0 || n%b==0)
        {
            return 0;
        }
        k++;
        a = 6*k-1;
        b = 6*k+1;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if(isPrime(n))
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not a Prime";
    }
}