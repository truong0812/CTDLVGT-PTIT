#include <bits/stdc++.h>
using namespace std;

vector <string> kq;
vector <char> tohop;
string s;
int n;

void luu()
{
    string a="";
    for(auto i:tohop) a+=i;
    kq.push_back(a);
}

void Trydoit(int x)
{
    for(int i=x;i <n;i++)
    {
        tohop.push_back(s[i]);
        luu();
        if(i <n) Trydoit(i+1);
        tohop.pop_back();
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n >> s;
        kq.clear();
        tohop.clear();
        Trydoit(0);
        sort(kq.begin(),kq.end());
        for(auto i:kq) cout << i << " ";
        cout << endl;
    }
}