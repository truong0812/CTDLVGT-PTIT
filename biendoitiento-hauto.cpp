#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        string s;cin >> s;
        stack <string> x;
        for(int i=s.size()-1;i >= 0;i--)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' ||s[i] == '/' )
            {
                string x1=x.top();x.pop();
                string x2=x.top();x.pop();
                string tmp = x1 + x2 +s[i];
                x.push(tmp);
            }
            else
            {
                string tmp= "";tmp+=s[i];
                x.push(tmp);
            }
        }
        cout << x.top() << endl;
    }
}