#include <bits/stdc++.h>
using namespace std;

struct canh
{
    int a,b,c;
};

vector <canh> x;
int chuaxet[10005];
int n,m,d;

bool cmp(canh x,canh y)
{
    return x.c < y.c;
}

void kruskal()
{
    d=x[0].c;
    chuaxet[x[0].a] = chuaxet[x[0].b] = 1;
    int dem=1;
    while(dem < n-1)
    {
        for(auto i:x)
        {
            if(chuaxet[i.a] + chuaxet[i.b] == 1)
            {
                d+=i.c;
                chuaxet[i.a] = chuaxet[i.b] = 1;
                dem++;
                break;
            }
        }
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        x.clear();
        cin >> n >> m;
        memset(chuaxet,0,sizeof(chuaxet));
        for(int i=1;i <= m;i++)
        {
            canh s;cin >> s.a >> s.b >> s.c;
            x.push_back(s);
        }
        sort(x.begin(),x.end(),cmp);
        kruskal();
        cout << d << endl;
    }
}