#include <bits/stdc++.h>
using namespace std;
int n,k;
set <string> s;
vector <string> ss;
string x;
set <string> :: iterator it;
int a[20];
void in()
{
    for(int i=0;i <k;i++) cout << ss[a[i]] << " ";
    cout << endl; 
}

void sinh(int x,int j)
{
    if(x == k) 
    {
        in();
        return;
    }
    for(int i=j; i < n-k+x+1;i++) 
    {
        a[x]=i;
        sinh(x+1,i+1);
    }
    
}

main()
{
    cin >> n >> k;
    
    for(int i=0;i <n;i++)
    {
        cin >> x;
        s.insert(x);
    }
    
    for(it = s.begin() ; it != s.end();it++)
    {
        x=*it;
        ss.push_back(x);
    }
    n=ss.size();
    sinh(0,0);
}