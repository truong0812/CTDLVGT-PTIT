#include <bits/stdc++.h>
using namespace std;

int a[20];
int t,n,k;

void in()
{
    for(int i=0;i <k;i++)
    {
        cout << char(a[i]+64) ;
    }
    cout << endl;
}

void tohop(int x,int y)
{
    if(x==k)
    {
        in();return;
    }
    for(int i=y;i <=n-k+x+1;i++)
    {
        a[x]=i;
        tohop(x+1,i+1);
    }
}

main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        tohop(0,1);
    }
}