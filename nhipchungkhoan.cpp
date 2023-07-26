#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int a[n+5];
        for(int i=0;i <n;i++) cin >> a[i];
        int dp[n+5];
        for(int i=0;i <n;i++)
        {
            int dem=1,j=i-1;
            while(j >= 0)
            {
                if(a[i] >= a[j])
                {
                    dem+=dp[j];
                    j-=dp[j];
                }
                else break;
            }   
            cout << dem << " ";
            dp[i] = dem;
        }
        cout << endl;
    }
}