#include <bits/stdc++.h>
using namespace std;

struct cv
{
    int a,b,c;
};

bool test[1005];

bool tmp(cv x,cv y)
{
    return x.c > y.c;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        memset(test,true,sizeof(test));
        int n;cin >> n;
        cv job[n];
        for(int i=0;i <n;i++)
        {
            cin >> job[i].a >> job[i].b >> job[i].c;
        }
        sort(job,job+n,tmp);
        int dem=0,s=0;
        for(int i=0;i <n;i++)
        {
            while(job[i].b > 0 && !test[job[i].b]) job[i].b--;
            if(job[i].b > 0)
            {
                test[job[i].b] = false;
                dem++;
                s+=job[i].c;
            }
        }
        cout << dem << " " << s << endl;
    }
}