#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    deque <int> s;
    string x;
    while (t--)
    {
        cin >> x;
        if(x == "PUSHFRONT") 
        {
            int a;cin >> a;
            s.push_front(a);
        }
        if( x == "PRINTFRONT")
        {
            if(!s.empty()) cout << s.front();
            else cout << "NONE";
        }
        if( x == "POPFRONT")
        {
            if (!s.empty()) s.pop_front();
        }
        if( x == "PUSHBACK") 
        {
            int a;cin >> a;
            s.push_back(a);
        }
        if( x == "PRINTBACK")
        {
            if(!s.empty()) cout << s.back();
        }
        if( x == "POPBACK")
        {
            if (!s.empty()) s.pop_back();
            else cout << "NONE";
        }
        cout << endl;
    }
    
}