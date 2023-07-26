#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;
int n,k;
long long a[1005][1005];

void Try()
{
    for(int i=1;i <=1000;i++)
    {
        for(int j=1;j <=i;j++)
        {
            if(j==1) a[i][j] = i;
            else if(i==j && i > 1) a[i][j] = (a[i-1][j-1]*i) % mod;
            else a[i][j] =(a[i-1][j] + j*a[i-1][j-1]) % mod;
        }
    }
}

main()
{
    Try();
    int t;cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << a[n][k] << endl;
    }
}