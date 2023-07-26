#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,k;cin >> n >> k;
        int x,vtri;
        bool ok=false;
        for(int i=1;i <= n;i++)
        {
            cin >> x;
            if(x == k) 
            {
                vtri = i;
                ok=true;
            }
        }
        if(ok) cout << vtri << endl;
        else cout << "NO\n";
    }
}