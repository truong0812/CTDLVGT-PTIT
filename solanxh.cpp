#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,x;cin >> n >> x;
        int dem=0,a;
        for(int i=0;i <n;i++)
        {
            cin >> a;
            if(a == x) dem++;
        }
        if(dem==0) cout <<"-1\n";
        else cout << dem << endl;

    }
}