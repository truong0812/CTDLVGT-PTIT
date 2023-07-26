#include <bits/stdc++.h>
using namespace std;
deque <string> s;
int n;


void Try()
{
    s.push_back("1");
    while(n--)
    {
        string x=s.front();s.pop_front();
        cout << x << " ";
        s.push_back(x+"0");
        s.push_back(x+"1");
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n;
        s.clear();
        Try();
        cout << endl;
    }
    
}