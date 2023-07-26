#include <bits/stdc++.h>
using namespace std;

int n,e,dem;
bool test[1005];
vector <int> ds[1005];

void DFS(int x)
{
    test[x]=false;
    for (auto i:ds[x])
    {
        if(test[i])
        {
            DFS(i);
        }
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        memset(test,true,1005);
        for(int i=0;i <=1000;i++) ds[i].clear();
        cin >> n >> e;
        for(int i=0;i <e;i++)
        {
            int a,b;cin >> a >> b;
            ds[a].push_back(b);
            ds[b].push_back(a);
        }
        dem=0;
        for(int i=1;i <=n;i++)
        {
            if(test[i])
            {
                dem++;
                DFS(i);
            }
        }
        cout << dem << endl;
    }
}