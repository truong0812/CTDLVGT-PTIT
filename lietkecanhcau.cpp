#include <bits/stdc++.h>
using namespace std;

int test[1005]={0};
int truoc[1005];
vector <int> ds[1005];
vector <pair<int,int>> ans;
int v,e;

void reset()
{
	for(int i=0;i <1005;i++)
	{
		test[i]=0;
		ds[i].clear();
	}
}


void DFS(int u)
{
	test[u]=1;
	for(int i = 0;i < ds[u].size();i++)
	{
		if (test[ds[u][i]] == 0)
		{
			truoc[ds[u][i]]=u;
			DFS(ds[u][i]);
		}
	}
	
}

int demlienthong()
{
	int d=0;
	for(int i=1;i <= v;i++)
	{
		if(test[i] == 0)
		{
			d++;
			DFS(i);
		}
	}
	return d;
}

void canhcau(int canh,int res,vector <pair<int,int>> tmp)
{
	for(int i=0;i <e;i++)
	{
		if(i != canh)
		{
			ds[tmp[i].first].push_back(tmp[i].second);
			ds[tmp[i].second].push_back(tmp[i].first);
		}
	}
	int dem = demlienthong();
	if(dem > res)
	{
		if(tmp[canh].first < tmp[canh].second)
		{
			ans.push_back({tmp[canh].first,tmp[canh].second});
		}
		else
		{
			ans.push_back({tmp[canh].second,tmp[canh].first});
		}
	}
}

main()
{
	int t;cin >> t;
	while(t--)
	{
		reset();
		ans.clear();
		vector <pair<int,int>> tmp;
		cin >> v >> e ;
		
		for (int i=1;i <= e;i++)
		{
			int x,y;cin >> x >> y;
			tmp.push_back({x,y});
			ds[x].push_back(y);
			ds[y].push_back(x);
		}
		int res=demlienthong();
		for(int i=0;i < e ;i++)
		{
			reset();
			canhcau(i,res,tmp);
		}
		sort(ans.begin(),ans.end());
		for(int i=0;i<ans.size();i++)
		{
			cout << ans[i].first << " " << ans[i].second <<" ";
		}
		cout << endl;
	}
}