#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int x,y;
        priority_queue < int, vector <int>, greater <int> > kq;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            kq.push(x);
        }
        int cp=0;
        while(kq.size() > 1)
        {
            x=kq.top();kq.pop();
            y=kq.top();kq.pop();
            cp+=(x+y);
            kq.push(x+y);
        }
        cout << cp << endl;
    }
}