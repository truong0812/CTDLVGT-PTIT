#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int k;cin >> k;
        string s;cin >> s;
        long long x[30]= {0};
        priority_queue <long long > kq;
        for(int i=0;i<s.size();i++)
        {
            x[s[i] - 'A'] ++;
        }
        for(int i=0;i <30;i++)
        {
            kq.push(x[i]);
        }
        while(k>0)
        {
            long long z=kq.top();kq.pop();
            z--;k--;
            kq.push(z);
        }
        long long sum =0;
        while(kq.size() > 0)
        {
            long long z=kq.top();kq.pop();
            sum +=(z*z);
        }
        cout << sum << endl;
    }
}