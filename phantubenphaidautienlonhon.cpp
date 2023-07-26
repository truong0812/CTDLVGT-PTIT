#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;cin >> n;
        int a[n+1];
        for(int i=0;i <n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i <n;i++)
        {
            bool check=true;
            for(int j=i+1;j <n;j++)
            {
                if(a[i] < a[j]) {cout << a[j] << " "; check=false;break;}
            }
            if(check) cout << "-1 ";
        }
        cout << endl;
    }
}