#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sqr = ceil(sqrt(n));
    int primes[sqr],k=0;
    int arr[sqr+1];
    arr[0]=arr[1]=0;
    for(int i=2;i<=sqr;i++)
    {
        arr[i] = 1;
    }
    for(int i=2;i*i<=sqr;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i;j<=sqr;j+=i)
            {
                arr[j]=0;
            }
        }
    }
    int y[sqr],j=0;
    for(int i=2;i<=sqr;i++)
    {
        if(arr[i]==1)
        {
            y[j++]=i;
        }
    }

    for(int i=0;i<j;i++)
    {
        while(n%y[i]==0)
        {
            primes[k++] = y[i];
            n/=y[i];
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