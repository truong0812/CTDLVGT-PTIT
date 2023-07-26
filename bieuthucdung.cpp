#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack <char> kq;
        int xoa=0,res=0;
        for(int i=0;i <s.size();i++)
        {
            if(kq.size()==0) 
            {
                kq.push(s[i]);
            }
            else if(kq.top() == '[' && s[i] == ']')
            {
                kq.pop();
                xoa+=2;
            }
            else if(kq.top() == ']' && s[i] == '[')
            {
                res +=kq.size() +xoa;
                kq.pop();
            }
            else if(s[i] == '[') 
            {
                kq.push(s[i]);
            }
            else if(kq.top() == ']' && s[i] == ']')
            {
                kq.push(s[i]);
            }
            if(kq.size() == 0) xoa = 0;
        }
        cout << res << endl;
    }
}
