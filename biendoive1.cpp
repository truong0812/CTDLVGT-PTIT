#include <bits/stdc++.h>
using namespace std;

int kq[100005];

main()
{
    kq[1]=0,kq[2]=1;kq[3]=1;
    for(int i=4;i <=100000;i++)
    {
        kq[i]=kq[i-1];
        if(i%2==0) kq[i] = min(kq[i],kq[i/2]);
        if(i%3==0) kq[i] = min(kq[i],kq[i/3]);
        kq[i]++;
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;cin >> n;
        cout << kq[n] << endl;
    }
}