#include <bits/stdc++.h>
using namespace std;

main (){
	int t;
	cin >> t;
	while (t--)
    {
		int n;string s;
        cin >> n >> s;
        cout << n << " ";
        int a[100];
        for(int i=0;i <s.size();i++)
        {
            a[i] = int(s[i] - '0');
        }
		n=s.size() - 2;
        while(n > 0 && a[n] >= a[n+1]) n--;
        if (n <= 0) cout << "BIGGEST\n";
        else 
        {
            int k=s.size()-1;
            while(a[k] <= a[n]) k--;
            swap(a[k],a[n]);
            sort(a+n+1,a+s.size());
            for(int i=0;i <s.size();i++) cout << a[i];
            cout << endl;
        }
	}

}

