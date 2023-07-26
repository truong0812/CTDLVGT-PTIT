#include <bits/stdc++.h>
using namespace std;

int dp[10005];

main()
{
    int t;cin >> t;
    for(int i=0;i <=10000;i++)
    {
        dp[i]=i;
    }
    for(int i=1;i <=10000;i++)
    {
        for(int j=1;j <=sqrt(i);j++)
        {
            dp[i] = min(dp[i],dp[i-j*j]+1);
        }
    }
    while(t--)
    {
        int n;cin >> n;
        cout << dp[n] << endl;
    }
}