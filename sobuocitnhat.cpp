#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int a[n+5],d[n+5],res=0;
        for(int i=0;i <n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i <n;i++)
        {
            d[i]=1;
            for(int j=0;j <i;j++)
            {
                if(a[i] >= a[j])
                {
                    d[i] = max(d[i],d[j]+1);
                }
            }
            res =max(res,d[i]);
        }
        cout << n - res << endl;
    }
}