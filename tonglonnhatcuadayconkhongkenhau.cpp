#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int a[n+5];
        long long sum[n+5]={0};
        for(int i=1;i <=n;i++) cin >> a[i];
        sum[1] = a[1];
        sum[2] = max(a[1],a[2]);
        for(int i=3;i <=n;i++)
        {
            sum[i] = max( sum [i-1],sum[i-2] + a[i]);
        }
        cout << sum[n] << endl;
    }
}