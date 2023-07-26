#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;cin >> n;
    int a[n+5],vt[n+5];
    for(int i=0;i <n;i++)
    {
        cin >> a[i];
        vt[a[i]] = i ;

    }
    int res=1,maxx=0;
    for(int i=1;i <=n-1;i++)
    {
        if(vt[i] < vt[i+1]){res++;maxx =max(res,maxx);}
        else res=1;
    }
    cout << n - maxx;
}