#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        string s;cin >> s;
        stack <char> x;
        bool ok=true;
        for(int i=0;i <s.size();i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') x.push(s[i]);
            else 
            {
                if(s[i] == ')')
                {
                    if(!x.empty() && x.top() == '(') x.pop();
                    else {cout << "false\n";ok=false;break;}
                }
                if(s[i] == ']')
                {
                    if(!x.empty() && x.top() == '[') x.pop();
                    else {cout << "false\n";ok=false;break;}
                }
                if(s[i] == '}')
                {
                    if(!x.empty() && x.top() == '{') x.pop();
                    else {cout << "false\n";ok=false;break;}
                }
            }
        }
        if(ok == true)
        {
            if(!x.empty()) cout << "false\n";
            else cout << "true\n";
        }
    }
}