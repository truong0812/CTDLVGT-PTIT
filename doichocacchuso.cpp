#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;cin >> t;
    while(t--)
    {
        int k;cin >> k;
        string s;cin >> s;
        int n=s.size();
        for(int i=0;i <n;i++)
        {
            char maxx=s[n-1];
            int vtri=n-1;
            for (int j=n-1;j >i && k >0;j--) 
            {
                if(maxx < s[j])
                {
                    maxx = s[j];
                    vtri = j;
                }
            }
            if(s[i] < maxx && k > 0) 
            {
                swap(a[i],a[vtri]);
                k--;
                
            }
        }
        cout << s << endl;
    }   
}