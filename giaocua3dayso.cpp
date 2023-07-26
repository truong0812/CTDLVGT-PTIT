#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,m,p;cin >> n >> m >> p;
        long long a[n],b[m],c[p];
        for(int i=0;i <n;i++) cin >> a[i];
        for(int i=0;i <m;i++) cin >> b[i];
        for(int i=0;i <p;i++) cin >> c[i];
        vector <long long> res;
        int i=0,j=0,k=0;
        while(i < n && j < m && k < p)
        {
            if(a[i] == b[j] && b[j] == c[k]) 
            {
                res.push_back(a[i]);
                i++;j++;k++;
            }
            else if(a[i] <= b[j] && b[j] <= c[k]) i++;
            else if(b[j] <= a[i] && a[i] <= c[k]) j++;
            else k++;
        }
        if(res.size() == 0) cout << "-1";
        else for(auto i:res) cout << i << " ";
        cout << endl;
    }
}