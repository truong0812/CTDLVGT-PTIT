#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int res=0;
        string s;cin >> s;
        stack <char> stk;
        for(int i=0;i <s.size();i++)
        {
            if(s[i] == '(' ) stk.push(s[i]);
            else if(!stk.empty())
            {
                res+=2;
                stk.pop();
            }
        }
        cout << res << endl;
    }
}