#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,s;cin >> n >> s;
        int a,dp[40005]={0};
        for(int i=0;i <n;i++)
        {
            cin >> a;
            dp[a]=1;
            for(int j=s;j > a;j--)
            {
                if(dp[j-a] == 1) dp[j] =1;
            }
        }
        if(dp[s] == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}