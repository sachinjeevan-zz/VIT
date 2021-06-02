#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int  n;
    cin >> n;
    int sqr = sqrt(n);
    int arr[sqr],k=0;
    for(int d=2;d<=sqr;d++)
    {
        while(n%d==0)
        {
            arr[k++] = d;
            n/=d;
        }
    }
    if(n>1) arr[k++] = n;
    for(int i=0;i<k;i++)
    {
        cout << arr[i] << " ";
    }
}