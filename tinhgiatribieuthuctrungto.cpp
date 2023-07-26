#include <bits/stdc++.h>
using namespace std;

int douutien(char c)
{
    if( c == '^') return 5;
    if( c == '*' || c == '/') return 4;
    if( c == '+' || c == '-') return 3;
    return 2;
}

string trungto_hauto(string s)
{
    string res="";
    stack < char > stk;
    for(int i=0;i < s.size();i++)
    {
        if(s[i] >= '0' && s[i] <= '9') res += s[i];
        else if ( s[i] == '(' ) stk.push( s[i] );
        else if ( s[i] == ')')
        {
            while( !stk.empty() && stk.top() != '(')
            {
                res += stk.top();
                stk.pop();
            }
        }
        else if( s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' )
        {
            if(res[res.size()-1] >= '0' && res[res.size()-1] <= '9') res+='#';
            while(!stk.empty() && douutien( stk.top() ) >= douutien( s[i] ) )
            {
                res += stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }
    }

    while(!stk.empty())
    {
        if(stk.top() != '(' ) res += stk.top();
        stk.pop();
    }
    return res;
}

main()
{
    int t;cin >> t;
    while(t--)
    {
        string s;cin >> s;
        s = trungto_hauto(s);
        stack < long long > stk;
        int l = s.size();
        for(int i=0;i < l;i++)
        {
            if( s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' )
            {
                long long a=stk.top();stk.pop();
                long long b=stk.top();stk.pop();
                long long tmp;
                if(s[i] == '+') tmp=a+b;    
                else if(s[i] == '-') tmp=b-a;    
                else if(s[i] == '/') tmp=b/a;    
                else if(s[i] == '*') tmp=a*b;
                else if(s[i] == '^') 
                {
                    tmp=b;
                    for(int j=1;j <a;j++)
                    {
                        tmp*=b;
                    }
                }    
                stk.push(tmp);
            }
            else
            {
                long long tmp=0;
                while(i < s.size() && s[i] >= '0' && s[i] <= '9')
                {
                    tmp = 10*tmp + (int)(s[i] - '0');
                    i++;
                }
                if(s[i] != '#') i--;
                stk.push(tmp);
            }
        }
        cout << stk.top() << endl;
    }
}