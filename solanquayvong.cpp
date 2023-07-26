#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        long long a[n];cin >> a[0];
        long long minn =a[0];
        for(int i=1;i <n;i++)
        {
            cin >> a[i];
            minn=min(minn,a[i]);
        }
        for(int i=0;i <n;i++) if(a[i] == minn) {cout << i << endl;break;}
    }
}