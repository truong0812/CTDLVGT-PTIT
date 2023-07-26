#include <bits/stdc++.h>
using namespace std;

bool test[15];
int a[15];
int n;

void in()
{
    for(int i=0;i <n;i++) cout <<a[i];
    cout << endl;
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
        if(test[i]) {
            a[x]=i;
            test[i]=false;
            hoanvi(x+1);
            test[i]=true;
        }
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n;
        memset(test,true,sizeof(test));
        hoanvi(0);
        cout << endl;
    }
}