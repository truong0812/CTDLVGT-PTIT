#include<bits/stdc++.h>
using namespace std;
struct node{
	int first,second,cnt;
};
int n,s1,s2,e1,e2;
char a[505][505];
void inp(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cin>>s1>>s2>>e1>>e2;
}
void solve(int i,int j){
	queue<node> q;
	q.push({i,j,0});
	while(!q.empty()){
		node u=q.front(); q.pop();
		int x=u.first,y=u.second,cnt=u.cnt;
		if(x==e1 && y==e2){
			cout<<cnt<<endl;
			return;
		}
		//up
		for(int i=x-1;i>=0;i--){
			if(a[i][y]!='X'){
				q.push({i,y,cnt+1});
				a[i][y]='X';
			}
			else break;
		}
		// down
		for(int i=x+1;i<n;i++){
			if(a[i][y]!='X'){
				q.push({i,y,cnt+1});
				a[i][y]='X';
			}
			else break;
		}
		//left
		for(int i=y-1;i>=0;i--){
			if(a[x][i]!='X'){
				q.push({x,i,cnt+1});
				a[x][i]='X';
			}
			else break;
		}
		//right
		for(int i=y+1;i<n;i++){
			if(a[x][i]!='X'){
				q.push({x,i,cnt+1});
				a[x][i]='X';
			}
			else break;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		solve(s1,s2);
	}
}