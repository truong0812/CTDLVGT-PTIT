#include <bits/stdc++.h>
using namespace std;

int slg[15][15];
int n;
string s[15];
int dem=-1;
bool test[15];
int x[15];

void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(test[j])
        {
            x[i] = j;
            test[j]=false;
            if(i == n)
            {
                int val=0;
                for(int k=1;k <n;k++)
                {
                    val+=slg[x[k]][x[k+1]];
                }
                if(dem == -1) dem=val;
                else dem = min(val,dem);
            }
            else Try(i+1);
            test[j] =true;
        }
    }
}

int trungnhau(string x,string y)
{
    bool b[30];memset(b,false,30);
    int res=0;
    for(int i=0;i <x.size();i++) b[int(x[i] - 'A')] = true;
    for(int i=0;i <y.size();i++) if(b[int(y[i] - 'A')]) res++;
    return res;
}

main()
{
    cin >> n;
    memset(test,true,sizeof(test));
    for(int i=1;i <=n;i++) cin >> s[i];
    for(int i=1;i <n;i++)
    {
        for(int j=i+1;j <=n;j++) slg[i][j] = slg[j][i] = trungnhau(s[i],s[j]);
    }
    Try(1);
    cout << dem << endl;
}