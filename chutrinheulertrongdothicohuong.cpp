#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1005];
bool chuaxet[1005],ok;
int vao[1005],ra[1005];
int n,v,a,b,dem;

void DFS(int x)
{
    chuaxet[x]=false;
    for(int i=0;i <ke[x].size();i++)
    {
        if(chuaxet[ke[x][i]]) DFS(ke[x][i]);
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        for(int i=0;i <=1000;i++) ke[i].clear();
        memset(chuaxet,true,1005);
        memset(vao,0,1005);
        memset(ra,0,1005);
        dem=0;
        ok=true;
        cin >> n >> v;
        for(int i=1;i <=v;i++)
        {
            cin >> a >> b;
            ke[a].push_back(b);
            vao[b]++;
            ra[a]++;
        }
        for(int i=1;i <=n;i++)
        {
            if(vao[i] != ra[i]) 
            {
                ok=false;
                break;
            }
            if(chuaxet[i]) 
            {
                DFS(i);
                dem++;
            }
        }
        if(ok && dem == 1) cout << "1\n";
        else cout << "0\n";
    }
}