#include<bits/stdc++.h>
using namespace std;

void solution(string s)
{
    
    stack <int> mystack;
    int i,j=0;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='D')
        {
            if(i==0||s[i-1]=='I') mystack.push(++j);
            mystack.push(++j);
        }
        else
        { 
            while(!mystack.empty())
            { 
                cout<<mystack.top();
                mystack.pop();
            }
            if(i==0) cout<<++j;
            if(s[i+1]!='D')cout<<++j;
        }
    }
    while(!mystack.empty())
    {   
        cout<<mystack.top();
        mystack.pop();
    }
    cout<<endl;
}

main()
{
    int t;cin>>t;
    for(int i=1;i <= t;i++)
    {
        string s;cin >> s;
        cout << "Test " << i << ": ";
        solution(s);
    }
}