#include <bits/stdc++.h>
using namespace std;

int n,t,kq[15];
bool test[15];

void in()
{
    for(int i=0;i <n;i++)
    {
        cout << kq[i];
    }
    cout << endl;
}

void Try(int x)
{
    if(x == n)
    {
        in();
        return;
    }
    for(int i=1;i <=n;i++)
    {
        if(!test[i] || (x > 0 && abs(kq[x-1] - i) == 1)) continue;
        else
        {
            test[i]=false;
            kq[x]=i;
            Try(x+1);
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
        cin >> n;
        Try(0);
    }
}