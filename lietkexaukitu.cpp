#include <bits/stdc++.h>
using namespace std;
int n,k;
char c;
int a[50];

void in()
{
    for(int i=0;i <k;i++)
    {
        cout << char(65+a[i]);
    }
    cout << endl;
}
void sinh(int x,int j)
{
    if(x == k)
    {
        in();
        return;
    }
    for(int i=j;i <= n;i++)
    {
        a[x]=i;
        sinh(x+1,i);
    }
}

main()
{
    cin >> c >> k;
    n= int(c-'A');
    sinh(0,0);
}