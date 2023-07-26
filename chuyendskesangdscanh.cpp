#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;cin >> n;
    vector <int> ds[n+5];
    for(int t=1;t <=n;t++)
    {
        string s;
        scanf("\n");
        getline(cin,s);
        s+=" ";
        int x=0;
        for(int i=0;i <=s.size();i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                x = x*10 + int(s[i] - '0');
            }
            else
            {
                ds[t].push_back(x);
                x=0;
            }
        }
    }
    for(int t=1;t <=n;t++)
    {
        sort(ds[t].begin(),ds[t].end());
        for(int j=0;j <ds[t].size();j++)
        {
            if (ds[t][j] > t )
            cout << t  << " " << ds[t][j] << endl;
        }
    }
}