 #include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        string s;cin >> s;
        int res=0;
        stack <int> x;
        x.push(-1);
        for(int i=0;i <s.size();i++)
        {
            if(s[i] == '(')
            {
                x.push(i);
            }
            else
            {
                x.pop();
                if(x.size() > 0) res= max(res,i-x.top());
                else x.push(i);
            }
        }
        cout << res << endl;


    }
}