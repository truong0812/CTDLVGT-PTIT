#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        string s;cin >> s;
        stack <int> x;
        
        for(int i=s.size()-1;i >= 0;i--)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' ||s[i] == '/' )
            {
                int x1=x.top();x.pop();
                int x2=x.top();x.pop();
                if(s[i] == '+')
                {
                    int s=x1+x2;
                    x.push(s);
                    continue;
                }
                if(s[i] == '-')
                {
                    int s=x1-x2;
                    x.push(s);
                    continue;
                }
                if(s[i] == '*')
                {
                    int s=x1*x2;
                    x.push(s);
                    continue;
                }
                if(s[i] == '/')
                {
                    int s=x1/x2;
                    x.push(s);
                    continue;
                }
            }
            else
            {
                int tmp = int (s[i] - '0');
                x.push(tmp);
            }
        }
        cout << x.top() << endl;
    }
}