#include <bits/stdc++.h>
using namespace std;
int a[20];int n,k;
void in()
{
    for(int i=0;i <k;i++) cout << a[i];
    cout << " "; 
}
void sinh(int x,int j)
{
    if(x == k) 
    {
        in();
        return;
    }
    for(int i=j; i <= n-k+x+1;i++) 
    {
        a[x]=i;
        sinh(x+1,i+1);
    }
    
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        cin >> n >> k;
        sinh(0,1);
        cout << endl;
    }
}