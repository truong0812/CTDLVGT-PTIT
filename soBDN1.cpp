#include <bits/stdc++.h>
using namespace std;
deque <long long> s;
long long n;
int dem;

void Try()
{
    s.push_back(1);
    while(true)
    {
        long long x=s.front();s.pop_front();
        if (x > n)
        {
            break;
        }
        else dem++;
        s.push_back(x*10);
        s.push_back(x*10+1);
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        dem=0;
        cin >> n;
        s.clear();
        Try();
        cout << dem << endl;
    }
    
}