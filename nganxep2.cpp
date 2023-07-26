#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    stack <int> x;
    string s;
    while(t--)
    {
        cin >> s;
        if(s == "PUSH")
        {
            int a;cin >> a;
            x.push(a);
        }
        else if(s == "POP")
        {
            if(!x.empty()) x.pop();
        }
        else
        {
            if(x.empty()) {cout << "NONE\n";}
            else{
                cout << x.top() << endl;
            }
        }
    }
}