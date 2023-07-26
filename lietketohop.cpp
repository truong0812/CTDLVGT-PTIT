#include <bits/stdc++.h>
using namespace std;

int a[20];
vector <int> ss;
set <int> s;
int n,k,z;

void in()
{
    for(int i=0;i <k;i++)
    {
        cout <<ss[a[i]] << " ";
    }
    cout << endl;
}

void sinh(int x,int j)
{
    if(x == k)
    {
        in();
        return;
    }
    for(int i=j;i < n-k+x+1;i++)
    {
        a[x]=i;
        sinh(x+1,i+1);
    }
}

main()
{
    cin >> n >> k;
    for(int i=0;i <n;i++)
    {
        cin >> z;
        s.insert(z);
    }
    set <int> :: iterator it;
    for(it=s.begin();it != s.end();it++)
    {
        z = *it;
        ss.push_back(z);
    }
    n=ss.size();
    sinh(0,0);
}