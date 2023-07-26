#include <bits/stdc++.h>
using namespace std;
vector <char> s;
int n;
int a[10][10];
bool check;
void in()
{
    for(int i=0;i <s.size();i++) cout << s[i];
    cout << " ";
}

void di(int x,int y)
{
    if(x==n-1 && y==n-1) 
    {
        check=true;
        in();
        return;
    }
    if(a[x+1][y] == 1)
    {
        s.push_back('D');
        di(x+1,y);
        s.pop_back();
    }
    if(a[x][y+1] == 1)
    {
        s.push_back('R');
        di(x,y+1);
        s.pop_back();
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        check=false;
        memset(a,0,sizeof(a));
        s.clear();
        cin >> n;
        for(int i=0;i <n;i++) for(int j=0;j <n;j++) cin >> a[i][j];
        di(0,0);
        if(!check || a[0][0] == 0) cout << "-1";
        cout << endl;
    }
}