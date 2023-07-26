#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1005];
bool chuaxet[1005];
int n,a,b;

void DFS(int x)
{
    chuaxet[x] = false;
    for(int i:ke[x])
    {
        if(chuaxet[i]) DFS(i);
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        for(int i=1;i <=1000;i++) ke[i].clear();
        memset(chuaxet,true,1005);
        cin >> n;
        for(int i=0;i <n-1;i++)
        {
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        int dem=0;
        for(int i=1;i <=n;i++)
        {
            if(chuaxet[i])
            {
                dem++;
                DFS(i);
            }
        }
        if(dem == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}