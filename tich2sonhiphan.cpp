#include <bits/stdc++.h>
using namespace std;

string s1,s2;
long long a,b;

long long chuyencoso(string s)
{
    long long x=1;
    long long sum=0;
    for(int i=s.size()-1;i >= 0;i--)
    {
        if(s[i] == '1') sum+=x;
        x*=2;
    }
    return sum;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> s1 >> s2;
        a=chuyencoso(s1);
        b=chuyencoso(s2);
        cout << a * b << endl;
    }
}