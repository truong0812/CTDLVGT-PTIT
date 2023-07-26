#include <bits/stdc++.h>
using namespace std;

int n;
struct cv
{
    int x,y;
};

bool tmp(cv a,cv b)
{
    return a.y < b.y;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n;
        cv a[n+5];
        for(int i=0;i <n;i++) cin >> a[i].x;
        for(int i=0;i <n;i++) cin >> a[i].y;
        sort(a,a+n,tmp);
        int m=a[0].y,dem=1;
        for(int i=1;i <n;i++)
        {
            if(a[i].x >= m)
            {
                dem++;
                m=a[i].y;
            }
        }
        cout << dem << endl;
    }
}