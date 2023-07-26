#include <bits/stdc++.h>
using namespace std;

int n,t,dem;
int a[15],test[15];

bool check()
{
    for(int i=0;i <n;i++)
    {
        if(a[i] != test[i]) return true;
    }
    return false;
}

void sinh()
{
    while(check())
    {
        int i=n-1,j=n-1;
        while(a[i] < a[i-1]) i--;
        i--;
        while(a[i] > a[j]) j--;
        swap(a[i],a[j]);
        sort(a+i+1,a+n);
        dem++;
    }

}
main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0;i <n;i++) 
        {
            cin >> test[i];
            a[i]=i+1;
        }
        dem=1;
        sinh();
        cout << dem << endl;
    }
}