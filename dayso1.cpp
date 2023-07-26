#include <bits/stdc++.h>
using namespace std;
int a[15][15];
int n,t;

main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0;i < n;i++) cin >> a[0][i];
        for(int i=0;i <n;i++)
        {
            cout << "[";
            for(int j=0;j < n-i;j++)
            {
                if(i!=0) a[i][j] = a[i-1][j] + a[i-1][j+1];
                cout << a[i][j];
                if(j < n-i-1) cout << " ";
            }
            cout << "]" << endl;
        }
    }
}