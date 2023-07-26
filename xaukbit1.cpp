#include <bits/stdc++.h>
using namespace std;
int a[20];int n,k;

void in()
{
    for(int i=0;i <n;i++) cout << a[i];
    cout << endl;
}

void check()
{
    int dem=0;
    for(int i=0;i < n;i++) if(a[i] == 1) dem++;
    if(dem==k) in();
}

void sinh(int x)
{
    if(x==n) 
    {
        check();return;
    }
    for(int i=0;i <=1;i++)
    {
        a[x]=i;
        sinh(x+1);
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n >> k;
        sinh(0);
    }
}