#include <bits/stdc++.h>
using namespace std;
int a[15];int n,t;

void in()
{
    for(int i=0;i <n;i++)
    {
        if(a[i]==0) cout <<"A";
        else cout << "B";
    }
    cout << " ";
}

void sinh(int x)
{
    if(x==n) 
    {
        in();return;
    }
    for(int i=0;i <=1;i++)
    {
        a[x]=i;
        sinh(x+1);
    }
}

main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        sinh(0);
        cout << endl;
    }
}
