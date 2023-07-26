#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        string s;cin >> s;
        char x=s[0];
        cout <<s[0];
        for(int i=1;i < s.size();i++)
        {   
           if(x != s[i])
           {
               cout << 1;
               x='1';
           } 
           else{
               cout << 0;
               x='0';
           }
        }
        cout << endl;
    }
}