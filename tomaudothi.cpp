#include <bits/stdc++.h>
using namespace std;

vector <int> ke[15];
bool chuato[15];
int v,e,m,a,b;

struct dta
{
    int dinh,ke;
};

dta x[15];

bool cmp( dta a,dta b)
{
    return a.ke > b.ke;
}

bool check(int x,int y)
{
    for(int i=0;i < ke[x].size();i++)
    {
        if(ke[x][i] == y) return false;
    }
    return true;
}


int tomaudothi()
{
    int dem=0;
    for(int i=1;i <=v;i++)
    {
        if(chuato[x[i].dinh])
        {
            chuato[x[i].dinh] =false;
            for(int j=1;j <= v;j++)
            {
                if(check(x[i].dinh,j)) chuato[j]= false;
            }
            dem++;
        }
    }
    return dem;
}


main()
{
    int t;cin >> t;
    while(t--)
    {
        for(int i=0;i <= 10 ;i++) ke[i].clear();
        memset(chuato,true,15);
        cin >> v >> e >> m;
        for(int i=0;i < e;i++)
        {
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        for(int i=1;i <= v;i++)
        {
            x[i].dinh = i;
            x[i].ke = ke[i].size();
        }
        sort(x,x+v,cmp);
        if(tomaudothi() <= m) cout << "YES\n";
        else cout << "NO\n";
    }
}