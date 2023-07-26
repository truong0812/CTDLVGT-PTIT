#include <bits/stdc++.h>
using namespace std;

main()
{
    queue <int> a;
    int t;cin >> t;
    while(t--)
    {
        string s;cin >> s;
        if ( s == "PUSH")
        {
            int n;cin >> n;
            a.push(n);
        }
        if ( s == "PRINTFRONT")
        {
            if(a.empty()) cout << "NONE";
            else cout << a.front();
        }
        if ( s == "POP" )
        {
            if(!a.empty()) a.pop();
        }
        cout << endl;
    }
}