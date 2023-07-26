#include <bits/stdc++.h>
using namespace std;

int kq[105];
int n,s;

void sonhonhat()
{
    memset(kq,0,sizeof(kq));
    int x=s;
    int y=n;
    while(x > 0)
    {
        if(x > 9) 
        {
            kq[y]=9;
            x=x-9;
            y--;
        }
        else
        {
            if(y == 1) kq[y]=x;
            else 
            {
                kq[y]=s-1;
                kq[1]=1;
                x=0;
            }
            break;
        }
    }
    for(int i=1;i <=n;i++) cout << kq[i];
    cout << " ";
}

void solonnhat()
{
    memset(kq,0,sizeof(kq));
    int x=s;
    int y=1;
    while(x > 0)
    {
        if(x > 9) 
        {
            kq[y]=9;
            x-=9;
        }
        else
        {
            kq[y]=x ;
            x=0;
            break;
        }
        y++;
    }
    for(int i=1;i <=n;i++) cout << kq[i];
    cout << endl;
}

main()
{
    cin >> n >> s;
    if(s == 0 || 9*n < s) cout << "-1 -1\n";
    else
    {
        sonhonhat();
        solonnhat();
    }
}