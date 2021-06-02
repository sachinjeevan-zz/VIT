#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sqr = ceil(sqrt(n));
    int primes[sqr],k=0;
    while(n%2==0)
    {
        primes[k++] = 2;
        n/=2;
    }
    for(int d=3;d*d<=n;d+=2)
    {
        while(n%d==0)
        {
            primes[k++] = d;
            n/=d;
        }
    }
    if(n>1)
    {
        primes[k++] = n;
    }
    for(int i=0;i<k;i++)
    {
        cout << primes[i] << " ";
    }
    
}