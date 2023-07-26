#include <bits/stdc++.h>
using namespace std;

int n,t,dem,k;
int a[15],test[15];

bool check()
{
    for(int i=1;i <=n;i++)
    {
        if(a[i] != test[i]) return false;
    }
    return true;
}

void sinh()
{
    while(!check())
    {
        dem++;
        int i=k;
        while(a[i]== n-k+i ) i--;
        a[i] ++;
        for(int j=i+1;j <= k;j++)
        {
            a[j] = a[j-1] + 1;
        }
    }
}

main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i=1;i <=k;i++)
        {
            cin >> test[i];
            a[i]=i;
        }
        dem=1;
        sinh();
        cout << dem << endl;
    }
}