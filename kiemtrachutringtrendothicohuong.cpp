#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1005];
bool chuaxet[1005];
int n,v,a,b;

void dfs(int x,int trc)
{
    for(int i=0;i <ke[x].size();i++)
    {
        if(chuaxet[ke[x][i]] && ke[x][i] != trc)
        {
            chuaxet[ke[x][i]] = false;
            dfs(ke[x][i],x);
        }
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        for(int i=1;i <=1000;i++) ke[i].clear();
        cin >> n >> v;
        for(int i=0;i <v;i++)
        {
            cin >> a >> b;
            ke[a].push_back(b);
        }
        bool ok = false;
        for(int i=1;i <=n;i++)
        {
            memset(chuaxet,true,1005);
            dfs(i,0);
            if(!chuaxet[i])
            {
                ok=true;
                break;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}