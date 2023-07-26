#include <bits/stdc++.h>
using namespace std;

int a[20];
vector <int> kq;
int n,k;

void in()
{
    for(auto i:kq) cout << i << " ";
    cout << endl;
}

void Try(int x,int j)
{
    for(int i=j;i <n;i++)
    {
        kq.push_back(a[i]);
        if(x < k) Try(x+1,i+1);
        else if(x == k) in();
        kq.pop_back();
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i=0;i <n;i++) cin >> a[i];
        sort(a,a+n);
        Try(1,0);
    }
}