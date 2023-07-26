#include <bits/stdc++.h>
using namespace std;

long long a[105][15];
long long mod =1e9 + 7;

void Try()
{
    for(int i=1;i <=100;i++)
    {
        for(int j=0;j <=9;j++)
        {
            if(i==1) a[i][j] = j+1;
            else if(j == 0) a[i][j] = a[i-1][j];
            else a[i][j] = (a[i-1][j] + a[i][j-1]) % mod;
        }
    }
}

main()
{
    int t;cin >> t;
    Try();
    while(t--)
    {
        int n;cin >> n;
        cout << a[n][9] << endl;
    }
}