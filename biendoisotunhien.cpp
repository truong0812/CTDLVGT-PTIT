#include <bits/stdc++.h>
using namespace std;

void Trydoit(long long n)
{
    queue <pair <int ,int>> q;
    set <int> st;
    st.insert(n);
    q.push({n,0});
    while(q.size() > 0)
    {
        pair <int , int> s = q.front();q.pop();
        if(s.first == 1) {cout << s.second << endl; return;}
        if(s.first-1 == 1) {cout << s.second+1 << endl; return;}
        
        if(s.first - 1 > 0 && st.find(s.first - 1) == st.end() )
        {
            q.push({s.first - 1,s.second + 1});
            st.insert(s.first - 1);
        }
        for(int i=2;i * i <= s.first ;i++)
        {
            if( s.first % i == 0)
            {
                if(st.find(s.first/i) == st.end())
                {
                    q.push({s.first/i , s.second + 1});
                    st.insert(s.first/i);
                }
            }
        }
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        long long n;cin >> n;
        Trydoit(n);
    }
}