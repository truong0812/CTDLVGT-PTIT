#include <bits/stdc++.h>
using namespace std;
vector <char> s;
int n;
int a[10][10];
bool test[10][10];
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
    if(a[x+1][y] == 1 && test[x+1][y])
    {
        test[x+1][y] =false;
        s.push_back('D');
        di(x+1,y);
        s.pop_back();
        test[x+1][y] = true;
    }
    if(a[x][y-1] == 1 && test[x][y-1])
    {
        test[x][y-1] =false;
        s.push_back('L');
        di(x,y-1);
        s.pop_back();
        test[x][y-1] = true;
    }
    if(a[x][y+1] == 1 && test[x][y+1])
    {
        test[x][y+1] = false;
        s.push_back('R');
        di(x,y+1);
        s.pop_back();
        test[x][y+1]=true;
    }
    if(a[x-1][y] == 1 && test[x-1][y])
    {
        test[x-1][y] =false;
        s.push_back('U');
        di(x-1,y);
        s.pop_back();
        test[x-1][y] = true;
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        check=false;
        memset(a,0,sizeof(a));
        memset(test,true,sizeof(test));
        s.clear();
        cin >> n;
        for(int i=0;i <n;i++) for(int j=0;j <n;j++) cin >> a[i][j];
        test[0][0]=false;
        di(0,0);
        if(!check || a[0][0] == 0) cout << "-1";
        cout << endl;
    }
}