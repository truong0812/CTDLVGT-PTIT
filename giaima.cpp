#include <bits/stdc++.h>
using namespace std;

int dp[45];
string s;

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> s;
        int n=s.size();
        memset(dp,0,sizeof(dp));
        if(s[0] == '0') cout << "0\n";
        else
        {
            dp[0]=1;dp[1]=1;
            for(int i=2;i <=n;i++)
            {
                if(s[i-1] > '0') dp[i] = dp[i-1];
                if(s[i-2] == '1' ||(s[i-2] == '2' && s[i-1] < '7')) dp[i] +=dp[i-2];
            }
            cout << dp[n] << endl;
        }
    }
}