#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,k;cin >> n >> k;
        int a[n],s1=0,s2=0;
        for(auto &x:a)
        {
            cin >> x;
        }
        sort(a,a+n);
        if(n-k > k) min=k;
        else min = n-k;
        for(int i=0;i <n;i++)
        {
            if(i <min) s1+=a[i];
            else s2+=a[i];
        }
        cout << s2-s1 << endl;
    }
}