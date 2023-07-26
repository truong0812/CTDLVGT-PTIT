#include <bits/stdc++.h>
using namespace std;

int t,n,x,a[30],kq[105];
bool OK;
void in(int slg)
{
    OK=true;
    cout <<"[";
    for(int i=0;i < slg;i++)
    {
        cout << kq[i] << " ";
    } 
    cout << kq[slg] << "] ";
}

void quaylui(int slg,int s,int j)
{
    for(int i=j;i <n;i++)
    {
        kq[slg]=a[i];
        s+=a[i];
        if(s==x)
        {
            in(slg);
        }
        else if(s > x) return;
        else quaylui(slg+1,s,i);
        s-=a[i];

    }
}

main()
{
    cin >> t;
    while(t--)
    {
        OK=false;
        cin >> n >> x;
        for(int i=0;i <n;i++) cin >> a[i];
        sort(a,a+n);
        quaylui(0,0,0);
        if(!OK) cout <<"-1";
        cout << endl;
    }
}