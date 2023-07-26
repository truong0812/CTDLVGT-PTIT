#include <bits/stdc++.h>
using namespace std;
deque <string> s;
int n;
vector <string> kq;

void in()
{
    cout << kq.size() << endl;
    for(auto i:kq) cout << i << " ";
    cout << endl;
}

void Try()
{
    s.push_back("6");
    s.push_back("8");
    while(true)
    {
        string x=s.front();s.pop_front();
        if (x.size() > n)
        {
            break;
        }
        else kq.push_back(x);
        s.push_back(x+"6");
        s.push_back(x+"8");
    }
    in();
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n;
        s.clear();
        kq.clear();
        Try();
    }
    
}