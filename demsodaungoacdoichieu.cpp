#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        string s;cin >> s;
        stack <char> x;
        for(int i=0;i <s.size();i++)
        {
            if(s[i] == ')')
            {
                if(!x.empty() && x.top() == '(' ) x.pop();
                else x.push(s[i]);
            }
            else x.push(s[i]);
        }
        int d1=0,d2=0;
        while(!x.empty())
        {
            if(x.top() == '(' ) d1++;
            else d2++;
            x.pop();
        }
        cout << d1/2 + d2/2 + d1%2 + d2%2 << endl;
    }
}