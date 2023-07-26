#include <bits/stdc++.h>
using namespace std;

struct cv{
    int a,b;
};

bool tmp(cv x, cv y)
{
    return x.b < y.b;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int dem=1;
        cv tg[n];
        for(int i=0;i <n;i++) cin >> tg[i].a >> tg[i].b;
        sort(tg,tg+n,tmp);
        int m=tg[0].b;
        for(int i=1;i<n;i++)
        {
            if(tg[i].a >= m)
            {
                dem++;
                m=tg[i].b;
            }
        }
        cout << dem << endl;
    }
}