#include <bits/stdc++.h>
using namespace std;
bool test[100000]; 
main()
{
    int t;cin >> t;
    while(t--)
    {
        memset(test,false,sizeof(test));
        int max=0,min=10e8+5;
        int n;cin >> n;
        int a[n+1];

        for(int i=0;i <n;i++)
        {
            cin >> a[i];
            test[a[i]] =true;
            if(a[i] > max) max=a[i];
            if(min > a[i]) min=a[i];
        }
        int dem=0;
        for(int i=min;i <= max;i++)
        {
            if(test[i] == false) dem++;
        }
        cout << dem << endl;
    }
}