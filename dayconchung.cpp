#include <bits/stdc++.h>
using namespace std;
int n,m,k,t,a[100005],b[100005],c[100005];
void giao()
{
    vector <int> giao;
    int i=0,j=0;
    while(i < n && j < m)
    {
        if(a[i] == b[j]) {giao.push_back(a[i]);i++;j++;}
        else if(a[i] > b[j]){j++;}
        else i++;
      
    }
    i=0;j=0;
    bool ok=false;
      while(i < giao.size() && j < k)
    {
        if(giao[i] == c[j]) {ok=true;cout << c[j] << " ";i++;j++;}
        else if(giao[i] > c[j]){j++;}
        else i++;
      
    }
    if(!ok) cout << "NO";
    cout << endl;
}

main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> k;
        for(int i=0;i <n;i++) cin >> a[i];
        for(int i=0;i <m;i++) cin >> b[i];
        for(int i=0;i <k;i++) cin >> c[i];
        giao();
    }
}