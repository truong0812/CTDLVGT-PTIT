#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int a[n];
        long long sum[n],res=0;
        for(int i =0;i <n;i++) cin >> a[i];
        memset(sum,0,sizeof(sum));
        for(int i=0;i <n;i++)
        {
            sum[i]=a[i];
            for(int j=0;j <i;j++)
            {
                if(a[i] > a[j]) sum[i] = max(sum[j] + a[i],sum[i]);
            }
            res = max(sum[i],res);
        }
        cout << res << endl;
    }
}