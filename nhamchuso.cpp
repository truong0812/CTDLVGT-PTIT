#include <bits/stdc++.h>
using namespace std;

int maxx(int x)
{
    vector <int> a;
    while(x > 0)
    {
        int k=x%10;
        if(k == 5) a.push_back(6);
        else a.push_back(k);
        x/=10;
    }
    int z=0;
    for(int i=a.size()-1;i >=0;i--)
    {
        z =z*10+a[i];
    }
    return z;
}

int minn(int x)
{
    vector <int> a;
    while(x > 0)
    {
        int k=x%10;
        if(k == 6) a.push_back(5);
        else a.push_back(k);
        x/=10;
    }
    int z=0;
    for(int i=a.size()-1;i >=0;i--)
    {
        z =z*10+a[i];
    }
    return z;
}

main()
{
    int a,b;cin >> a >> b;
    cout << minn(a) + minn(b)  << " " << maxx(a) + maxx(b);
}