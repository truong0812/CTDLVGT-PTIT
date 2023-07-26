#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[20];
string s="";
vector <string> kq;

void Try(int x)
{
    
    for(int i=0;i <=1;i++)
    {
        a[x]=i;
        if(x == n-k)
        {
            for(int l=1 ; l <= n-k;l++)
            {
                if(l== 1 && a[l] == 1)
                {
                    string tmp=s;
                    for(int j=1;j <=n-k;j++)
                    {
                        if(a[j]) tmp+="B";
                        else tmp +="A";
                    }
                      kq.push_back(tmp);
                }
                if (l==n-k && a[l] == 1)
                {
                    string tmp="";
                    for(int j=1;j <=n-k;j++)
                    {
                        if(a[j]) tmp+="B";
                        else tmp +="A";
                    }
                    tmp+=s;
                    kq.push_back(tmp);
                }
                if (a[l] && a[l-1] && l>1)
                {
                    string tmp="";
                    for(int j=1;j <=n-k;j++)
                    {
                        if(j == l) tmp+=s;
                        if(a[j]) tmp+="B";
                        else tmp +="A";
                    }
                    kq.push_back(tmp);
                }
            }
        }
        else Try(x+1);
    }
}

main()
{
    cin >> n >> k;
    for(int i=0;i <k;i++) s+="A";
    Try(1);
    sort(kq.begin(),kq.end());
    cout << kq.size() << endl;
    for(auto i:kq) cout << i << endl;
}