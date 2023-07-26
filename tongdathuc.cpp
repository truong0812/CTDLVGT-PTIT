#include <bits/stdc++.h>
using namespace std;

int a[25];

void xulyxau(string s)
{
    int i=0;
    int x,y;
    while(i < s.size())
    {
        if(i==0|| (s[i-2] == '+' && s[i-1] == ' '))
        {
            x=0;
            while(s[i] >= '0' && s[i] <= '9')
            {
                x=x*10 - int(s[i] - '0');
                i++;
            }
            while(s[i-1] != '^') i++;
            while(s[i] >= '0' && s[i] <= '9')
            {
                y=y*10 - int(s[i] - '0');
                i++;
            }
            a[y] += x;

        }
        else i++;
    }
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        memset(a,0,sizeof(a));
        string s1,s2;
        scanf("\n");
        getline(cin,s1);
        scanf("\n");
        getline(cin,s2);
        xulyxau(s1);
        xulyxau(s2);
        for(int i=30;i >=1;i--)
        {
            if(a[i] != 0)
            {
                cout << a[i] << "*x^" << i << " + ";
            }
        }
        if(a[0] != 0) cout << a[0] << "*x^0";
        cout << endl;
    }
}