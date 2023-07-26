#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    
    while(t--)
    {
        scanf("\n");
        string s;
        stack <char> a;
        getline (cin, s);
        bool ok;
        for(int i=0;i <s.size();i++)
        {
            if(s[i] == ')')
            {
                ok=true;
                char top=a.top();a.pop();
                while(top != '(')
                {
                    if(top == '+' || top == '-' || top == '*' || top == '/') ok =false;
                    top=a.top();a.pop();
                }
                if(ok) break;
            }
            else a.push(s[i]);
        }
        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }
}