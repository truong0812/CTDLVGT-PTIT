#include <bits/stdc++.h>
using namespace std;

int test[1005];
vector <int> ds[1005];
int n,e;

void DFS(int x)
{
    test[x]=false;
    for(auto i:ds[x])
    {
        if(test[i]) DFS(i);
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        for(int i=0;i <=1000;i++) ds[i].clear();
        cin >> n >> e;
        for(int i=0;i <e;i++)
        {
            int a,b;
            cin >> a >> b;
            ds[a].push_back(b);
            
        }
        bool ok=true;
        for(int i=1;i <=n;i++)
        {
            memset(test,true,sizeof(test));
            DFS(i);
            for(int j=1;j <=n;j++) if(test[j]) ok=false;
            if(!ok) break;
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}