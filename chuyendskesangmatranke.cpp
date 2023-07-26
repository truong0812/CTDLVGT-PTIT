#include <bits/stdc++.h>
using namespace std;

int a[1005][1005],n;

main()
{
    memset(a,0,sizeof(a));
    cin >> n;
    for(int i=1;i <=n;i++)
    {
        string s;
        scanf("\n");
        getline(cin,s);
        s+=" ";
        int so=0;
        for(int j=0;j <=s.size();j++)
        {
            if(s[j] >= '0' && s[j] <= '9') so = so*10 + int(s[j] - '0');
            else
            {
                a[i][so] = 1;
                so=0;
            }
        }
        for(int j=1;j <=n;j++) cout << a[i][j] << " ";
        cout << endl;
    }
}