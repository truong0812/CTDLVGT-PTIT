#include <bits/stdc++.h>
using namespace std;

main()
{
    vector <int> x;
    string s;
    while(true)
    {
        cin >> s;
        if(s == "push")
        {
            int a;cin >> a;
            x.push_back(a);
        }
        else if(s == "pop")
        {
            x.pop_back();
        }
        else 
        {
            if(x.empty()) 
            {
                cout << "empty\n";
                break;
            }
            else{
                for(int i = 0;i < x.size();i++)
                {
                    cout << x[i] << " ";
                }
                cout << endl;
            }
        }
    }
}