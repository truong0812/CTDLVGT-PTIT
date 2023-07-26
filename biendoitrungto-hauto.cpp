#include <bits/stdc++.h>
using namespace std;

int uutien(char c)
{
    if(c == '^') return 5;
    else if(c == '*' || c == '/') return 4;
    else if(c == '+' || c == '-') return 3;
    else return 2;
}

void Try()
{
    string s,res="";
    cin >> s;
    stack <char> stk;
    for(int i=0;i < s.size();i++)
    {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) res+=s[i];
        else if(s[i] == '(') stk.push(s[i]);
        else if(s[i] == ')')
        {
            while(stk.size() && stk.top() != '(')
            {
                res+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else if(s[i] == '^' || s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-' )
        {
            while(stk.size() && uutien(stk.top()) >= uutien(s[i]))
            {
                res+=stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }
    }
    while(stk.size())
    {
        if(stk.top() != '(') res +=stk.top();
        stk.pop();
    }
    cout << res << endl;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        Try();
    }
}