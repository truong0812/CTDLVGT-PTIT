#include <bits/stdc++.h>
using namespace std;

int a[105],b[105];
int n,k;
int dem=0;

void check(int x)
{
    vector <int> kq;
    if(x == k)
    {
        for(int i=1;i <=n;i++)
        {
            if(b[i] == 1) kq.push_back(a[i]);
        }
        bool ok=true;
        for(int i=0;i < k-1;i++)
        {
            if(kq[i] >= kq[i+1]) 
            {
                ok=false;
                break;
            }
        }
        if(ok) dem++;
    }
}

void Try(int x,int s)
{
    for(int i=0;i <=1;i++)
    {
        b[x]=i;
        if(i == 1) s++;
        if(x == n) check(s);
        else Try(x+1,s);
        if(i == 1) s--;
    }
}

main()
{
    cin >> n >> k;
    for(int i=1;i <=n;i++) cin >> a[i];
    Try(1,0);
    cout << dem << endl;
}