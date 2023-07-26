#include <bits/stdc++.h>
using namespace std;
deque <long long> s;
int n;


void Try()
{
    s.push_back(9);
    while(true)
    {
        long long x=s.front();s.pop_front();
        if (x%n == 0)
        {
            cout << x << endl;
            break;
        }
        s.push_back(x*10);
        s.push_back(x*10+9);
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