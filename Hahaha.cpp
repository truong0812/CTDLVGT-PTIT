#include <bits/stdc++.h>
using namespace std;

int a[20];
int n,t;

void in()
{
    for(int i=0;i <n;i++)
    {
        if(a[i] == 0) cout << "A";
        else cout << "H";
    }
    cout << endl;
}

void sinh(int x,int check)
{
    if(x==n-1)
    {
        in();
        return;
    }
    if(check==1) 
    {
        a[x]=0;sinh(x+1,0);
    }
    else
    {
        for(int i=0;i <=1;i++)
        {
            a[x]=i;
            if(i==1) sinh(x+1,1);
            else sinh(x+1,0);
        }
    }
}

main()
{
    cin >> t;
    a[0]=1;
    while(t--)
    {
        cin >> n;
        a[n-1] = 0;
        sinh(1,1);
    }
}