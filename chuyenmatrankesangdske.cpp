#include <bits/stdc++.h>
using namespace std;

main()
{
    int n;cin >> n;
    int a;
    for(int i=1;i <=n;i++)
    {
        for(int j=1;j <=n;j++)
        {
            cin >> a;
            if(a==1) cout << j << " ";
        }
        cout << endl;
    }
}