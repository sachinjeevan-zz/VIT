#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 2;
    int fn3 = 2,fn6=0;
    int fn = 4*fn3+fn6;
    while(fn<=n)
    {
        sum+=fn;
        fn6 = fn3;
        fn3 = fn;
        fn = 4*fn3+fn6;
    }
    cout << sum;
}