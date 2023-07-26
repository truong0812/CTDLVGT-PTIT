#include <bits/stdc++.h>
using namespace std;

int n,t;
int a[15];

void in(int x)
{
    cout << "(";
    for(int i=0;i < x;i++)
    {
        cout << a[i] <<" ";
    }
    cout << a[x] << ") ";
}

void sinh(int x,int s,int j)
{
    for(int i=j;i >= 1;i--)
    {
        if(s-i >= 0)
        {
            a[x]=i;
            if(s-i == 0) in(x);
            else sinh(x+1,s-i,i);
        }
    }
}

main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        sinh(0,n,n);
        cout << endl;
    }
}