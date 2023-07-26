#include <bits/stdc++.h>
using namespace std;

int dp[101][25001];

main()
{
    int W,n;cin >> W >> n;
    int a[n+5];
    for(int i=1;i <= n;i++) cin >> a[i];
    for(int i=1;i <=n;i++)
    {
        for(int j=1;j <= W;j++)
        {
            if(j >= a[i]) dp[i][j] = max(dp[i-1][j],dp[i-1][j-a[i]] + a[i]);
            else dp[i][j] = dp[i-1][j];
        }
    }  
    cout << dp[n][W];  
}