#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> pii;
struct edge{
	int a,b;
	double w;
};
int n,parent[1001],sz[1001];
vector<pii>u;
vector<edge> canh;
double kcach( pii a, pii b){
	double x=b.first-a.first;
	double y=b.second-a.second;
	return sqrt(x*x+y*y);
}
void inp(){
	cin>>n;
	for(int i=0;i<n;i++){
		double x,y; cin>>x>>y;
		u.push_back({x,y});
	}
	for(int i=1;i<u.size();i++){
		for(int j=0;j<i;j++){
			canh.push_back({j+1,i+1,kcach(u[i],u[j])});
		}
	}
}
void make_set(){
	for(int i=1;i<=n;i++){
		parent[i]=i;
		sz[i]=1;
	}
}

int find(int v){
	if(v==parent[v]){
		return v;
	}
	return parent[v]=find(parent[v]);
}
bool Union(int a,int b){
	a=find(a); b=find(b);
	if(a==b) return false;
	if(sz[a]<sz[b]) swap(a,b);
	parent[b]=a;
	sz[a]+=sz[b];
	return true;
}
bool cmp(edge a,edge b){
	return a.w<b.w;
}
void kruskal(){
	vector<edge> mst;
	double d=0;
	sort(canh.begin(),canh.end(),cmp);
	for(int i=0;i<canh.size();i++){
		if(mst.size()>=n-1) break;
		edge e=canh[i];
		if(Union(e.a,e.b)){
			mst.push_back(e);
			d+=e.w;
		}
	}
	if(mst.size()!=n-1){
		cout<<-1<<endl;
	}
	else{
		cout<<fixed<<setprecision(6)<<d<<endl;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		make_set();
		kruskal();
		u.clear(); canh.clear();
	}
}