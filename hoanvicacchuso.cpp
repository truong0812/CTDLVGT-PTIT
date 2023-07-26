#include <bits/stdc++.h>
using namespace std;

vector <char> x[10],y[10];
string s;
vector <long long> kq;
bool test[10];
long long res;
int n,k;

void check()
{
    for(int i=1;i <=n;i++)
    {
        long long a=0;
        for(int j=0;j <k;j++)
        {
            int o= int(x[i][j] - '0');
            a=a*10 + o;
        }
        kq.push_back(a);
    }
    sort(kq.begin(),kq.end());
    res=min(res,kq[n-1] - kq[0]);
    kq.clear();
}

void Try(int a)
{
    for(int i=0;i <k;i++)
    {
        if(test[i])
        {
            for(int j=1;j <=n;j++) x[j].push_back(y[j][i]);
            test[i]=false;
            if(a < k-1) Try(a+1);
            else if(a == k-1) check();
            for(int j=1;j <=n;j++) x[j].pop_back();
            test[i]=true;
        }
    }
}

main()
{
    res=1e9;
    memset(test,true,10);
    cin >> n >> k;
    for(int i=1;i <=n;i++)
    {
        cin >> s;
        for(int j=0;j <s.size();j++) y[i].push_back(s[j]);
    }
    Try(0);
    cout << res;
}