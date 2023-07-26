#include <bits/stdc++.h>
using namespace std;

int a[1005][1005];
string n,m;

main()
{
    int t;cin >> t;
    while(t--)
    {
        memset(a,0,sizeof(a));
        cin >> n >> m;
        for(int i=0;i <n.size();i++)
        {
            for(int j=0;j < m.size();j++)
            {
                if(n[i] == m[j]) a[i+1][j+1] = a[i][j] + 1;
                else  a[i+1][j+1] = max(a[i][j+1],a[i+1][j]);
            }
        }
        cout << a[n.size()][m.size()] << endl;
    }
}