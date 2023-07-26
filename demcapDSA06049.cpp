#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,k;cin >> n >> k;
        int a[n+5];
        for(int i=1;i <=n;i++)
        {
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        long long res=0;
        for(int i=n;i >1;i--)
        {
            int tmp = upper_bound(a+1,a+n+1,a[i]-k) - a;
            if(a[tmp] + k == a[i]) tmp++;
            tmp=i-tmp;
            if(tmp>0) res+= tmp;
        }
        cout << res << endl;
    }
}