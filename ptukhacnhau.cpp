#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int a[n+5],b[n+5];
        for(int i=0;i <n;i++) cin >> a[i];
        for(int i=0;i <n-1;i++) cin >> b[i];
        b[n-1]=-1e9;
        for(int i=0;i < n;i++) 
        {
            if(a[i] != b[i])
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
}