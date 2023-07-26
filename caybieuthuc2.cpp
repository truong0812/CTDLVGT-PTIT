#include <bits/stdc++.h>
using namespace std;

vector <string> v;
int n;

int toint(string s)
{
    int x=0;
    for(int i=0;i < s.size() ;i++)
    {
        x = x * 10 + (s[i] - '0');
    }
    return x;
}

int doit(int i)
{
    if(v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/" )
    {
        if(v[i] == "+") return doit(i*2+1) + doit(i*2+2);
        if(v[i] == "-") return doit(i*2+1) - doit(i*2+2);
        if(v[i] == "*") return doit(i*2+1) * doit(i*2+2);
        if(v[i] == "/") return doit(i*2+1) / doit(i*2+2);
    }
    else return toint(v[i]);
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n;
        v.clear();
        string a;
        for(int i=0;i < n;i++)
        {
            cin >> a;
            v.push_back(a);
        }
        cout << doit(0) << endl;
    }
}