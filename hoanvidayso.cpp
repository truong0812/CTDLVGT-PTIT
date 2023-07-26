#include <bits/stdc++.h>
using namespace std;

int a[15],n,test[15];
bool check[15];

void in()
{
    for(int i=0;i <n;i++)
    {
        cout << a[test[i]] << " ";
    }
    cout << endl;
}

void sinh(int x)
{
    if(x == n)
    {
        in();
        return;
    }
    for(int i=0;i <n;i++)
    {
        if(check[i])
        {
            test[x]=i;
            check[i]=false;
            sinh(x+1);
            check[i]=true;
        }
    }
}

main()
{
    memset(check,true,sizeof(check));
    cin >> n;
    for(int i=0;i <n;i++) cin >> a[i];
    sort(a,a+n);
    sinh(0);
}