#include <bits/stdc++.h>
using namespace std;

int a[10],check[10];
int n,t;

void in()
{
    for(int i=0;i <n;i++)
    {
        cout << a[i];
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
    for(int i=1;i <=n;i++)
    {
        if(check[i])
        {
            if(x >0 && abs(a[x-1] - i) == 1) 
            {
                continue;
            }
            else 
            {
                a[x]=i;
                check[i]=false;
                sinh(x+1);
                check[i]=true;
            }
        }
    }
}

main()
{
    cin >> t;
    while(t--)
    {
        memset(check,true,sizeof(check));
        cin >> n;
        sinh(0);
    }
}