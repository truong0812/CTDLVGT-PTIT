#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while (t--)
    {
        scanf("\n");
        string s;getline(cin,s);
        stack <string> x;
        string tmp="";
        for(int i=0;i <s.size();i++)
        {
            if(s[i] == ' ' )
            {
                x.push(tmp);
                tmp="";
            }
            else 
            {
                tmp+=s[i];
                if(i==s.size()-1) x.push(tmp);
            }
        }
        while(!x.empty())
        {
            cout << x.top() << " ";
            x.pop();
        }
        cout << endl;
    }
    
}