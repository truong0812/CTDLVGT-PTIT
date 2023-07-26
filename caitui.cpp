#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
struct tui{
    int a=0,c=0;
};

main()
{
    int t;cin >> t;
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        int V,n;cin >> n >> V;
        tui a[n+5];
        for(int i=1;i <= n;i++) cin >> a[i].a;
        for(int i=1;i <= n;i++) cin >> a[i].c;
        for(int i=1;i <=n;i++)
        {
            for(int j=1;j <= V;j++)
            {
                if(j >= a[i].a) dp[i][j] = max(dp[i-1][j],dp[i-1][j-a[i].a] + a[i].c);
                else dp[i][j] = dp[i-1][j];
            }
        }  
        cout << dp[n][V] << endl; 
    } 
}