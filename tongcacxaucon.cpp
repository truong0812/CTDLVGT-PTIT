#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        long long n;cin >> n;
        long long sum=0;
        vector <int> x;
        while(n > 0)
        {
            x.push_back(n%10);
            n/=10;
        }
        reverse(x.begin(),x.end());
        for(int i=0;i <x.size();i++)
        {
            long long tmp=0;
            for(int j=i;j <x.size();j++)
            {
                tmp = tmp*10+x[j];
                sum+=tmp;
            }
        }
        cout << sum << endl;
    }
}