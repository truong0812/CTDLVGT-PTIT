#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int q,val=0;
        queue <int> dp;
        cin >> q;
        while(q--)
        {
            int so;
            cin >> so;
            if(so == 1) cout << dp.size() << endl;
            else if(so == 2) (dp.size() > 0) ? cout << "NO\n" : cout << "YES\n";
            else if(so == 3)
            {
                int n;cin >> n;
                dp.push(n);
            }
            else if(so == 4 && dp.size() >0) dp.pop();
            else if(so == 5) (dq.size() > 0) ? cout << dp.front() << endl : cout << "-1\n";
            else if(so == 6) (dp.size() > 0) ? cout << dp.back() << endl : cout << "-1\n";
            val =so;
        }
        if (val == 3 || val == 4) cout << endl;
    }
}