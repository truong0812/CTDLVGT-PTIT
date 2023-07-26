#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        string s;cin >> s;
        cout <<s[0];
        for(int i=1;i < s.size();i++)
        {   
           if(s[i-1] != s[i])
           {
               cout << 1;
           } 
           else{
               cout << 0;
           }
        }
        cout << endl;
    }
}