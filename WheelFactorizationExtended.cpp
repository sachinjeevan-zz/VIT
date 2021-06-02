#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sqr = ceil(sqrt(n));
    int primes[sqr],k=0;
    int arr[]={2,3,5};
    for(int i=0;i<3;i++)
    {
        while(n%arr[i]==0)
        {
            primes[k++] = arr[i];
            n/=arr[i];
        }
    }
    int increments[] = {4,2,4,2,4,6,2,6};
    int i=-1;
    for(int d=7;d*d<=n;d+=increments[i])
    {
        while(n%d==0)
        {
            primes[k++] = d;
            n/=d;
        }
        i++;
        if(i==8)
        {
            i=0;
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