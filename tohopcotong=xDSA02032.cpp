#include <bits/stdc++.h>
using namespace std;

vector <string> kq;
vector <int> tohop;
int s,n,a[50];

void in()
{
    if(kq.empty()) cout << "-1\n";
    else
    {
        cout << kq.size() << " ";
        for(auto i:kq) cout << i << " ";
        cout << endl;
    }
    
}

void luu()
{
    string a= "{";
    for(auto i : tohop)
    {
        a+=to_string(i);
        a+=" ";
    }
    a[a.size()-1] = '}';
    kq.push_back(a);
}

void Try(int x,int sum)
{
    for(int i=x;i <n;i++)
    {
        sum+=a[i];
        tohop.push_back(a[i]);
        if(sum < s) Try(i,sum);
        else if(sum == s) luu();
        tohop.pop_back();
        sum-=a[i];
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        kq.clear();
        tohop.clear();
        cin >> n >> s;
        for(int i=0;i <n;i++) cin >> a[i];
        sort()
        Try(0,0);
        in();
    }
}