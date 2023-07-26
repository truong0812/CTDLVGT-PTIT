#include <bits/stdc++.h>
using namespace std;

char s[]={'A','B','C','D','E','F','G','H'};
bool test[10];
int n;
int kq[10];
void in()
{
    for(int i=0; i<n;i++)
    {
        cout << s[kq[i]];
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
    for(int i=0;i <n;i++)
    {
        if(x > 1 && (kq[x-2] != 0 && kq[x-2] != 4) && (i != 0 && i != 4) && (kq[x-1] == 0 || kq[x-1] == 4) ) continue;
        else if(test[i])
        {
            kq[x]=i;
            test[i]=false;
            Try(x+1);
            test[i]=true;
        }
    }
}

main()
{
    memset(test,true,sizeof(test));
    char c;cin >> c;
    n= int(c - 64);
    Try(0);
}