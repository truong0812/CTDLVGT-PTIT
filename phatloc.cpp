#include <bits/stdc++.h>
using namespace std;

int a[20],n;

void in()
{
    if(a[n-1] == 1) return;
    for(int i=0;i <n;i++)
    {
        if(a[i] == 1) cout << "8";
        else cout << "6";
    }
    cout << endl;
}

void sinh(int x,int tam,int sau)
{
    if(x == n) 
    {
        in();
        return;
    }
    for(int i=0;i <2;i++)
    {
        if((i==1 && tam == 1) || (i==0 && sau == 3)) continue;
        else
        {
            if(i==1)
            {
                a[x]=i;
                sinh(x+1,tam+1,0);
            }
            else
            {
                a[x]=i;
                sinh(x+1,0,sau+1);
            }
        } 
    }
}

main()
{
    cin >> n;
    a[0]=1;
    sinh(1,1,0);
}