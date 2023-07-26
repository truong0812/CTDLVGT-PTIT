#include <bits/stdc++.h>
using namespace std;

long long MOD =1e9 +7;

main()
{
    int t;cin >> t;
    while(t--)
    {
        long long n;cin >> n;
        long long a[n+5];
        for(long long i=0;i <n;i++) cin >> a[i];
        sort(a,a+n);
        long long s=0;
        for(long long i=1;i <n;i++)
        {
            s+=(a[i]*i);
            s = s%MOD;
        }
        cout << s << endl;
    }
}