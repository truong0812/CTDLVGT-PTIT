#include <bits/stdc++.h>
using namespace std;
bool test[15];
int a[15];
int n,t;
string s;

void in()
{
    for(int i=0;i <n;i++)
    {
        cout << char(a[i] + 64);
    }
    cout << " ";
}

void hoanvi(int x)
{
    if(x==n)
    {
        in();
        return;
    }
    for(int i=1;i <=n;i++)
    {
        if(test[i])
        {
            test[i]=false;
            a[x]=i;
            hoanvi(x+1);
            test[i]=true;
        }
    }
}

main()
{
    cin >> t;
    while(t--)
    {
        memset(test,true,sizeof(test));
        cin >> s;
        n=s.size();
        hoanvi(0);
        cout << endl;
    }
}