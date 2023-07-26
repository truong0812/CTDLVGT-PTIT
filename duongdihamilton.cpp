#include <bits/stdc++.h>
using namespace std;

vector <int> ke[20];
int n,e,a,b;
bool chuaxet[20];
bool ok;

void sinh(int x,int dem)
{
    if(ok) return;
    if(dem == n) {ok=true;return;}
    for(int i=0;i <ke[x].size();i++)
    {
        if(chuaxet[ke[x][i]])
        {
            chuaxet[ke[x][i]] = false;
            sinh(ke[x][i],dem+1);
            chuaxet[ke[x][i]] = true;
        }
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n >> e;
        ok=false;
        for(int i=0;i <=20;i++) ke[i].clear();
        for(int i=0;i <e;i++)
        {
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        for(int i=1;i <= n ;i++)
        {
            memset(chuaxet,true,20);
            chuaxet[i]=false;
            sinh(i,1);
            if(ok) break;
        }
        if(ok) cout << "1\n";
        else cout << "0\n";
    }
}