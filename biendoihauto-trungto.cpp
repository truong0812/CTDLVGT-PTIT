#include <bits/stdc++.h>
using namespace std;

void Try()
{
    string s;
    stack <string> stk;
    cin >> s;
    for(int i=0;i <s.size();i++)
    {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] <= 'a' && s[i] >= 'z'))
        {
            string res="";
            res+=s[i];
            stk.push(res);
        }
        else
        {
            string kq="",x,y;
            x=stk.top();stk.pop();
            y=stk.top();stk.pop();
            kq = "("+y+s[i]+x+")";
            stk.push(kq);
        }
    }
    cout << stk.top() << endl;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        Try();
    }
}