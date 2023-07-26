
#include<bits/stdc++.h>
using namespace std;
int inor[10001],lever[10001],n;
struct Node{
	int data;
	Node *l;
	Node *r;
	Node(int x){
		data=x;
		l=NULL;
		r=NULL;
	}
};
typedef Node* node;
node tao_tree(int start,int end,map<int,int> mp){
	if(start > end) return NULL;
	int index=start;
	for(int i=start;i<=end;i++){
		if(mp[inor[i]] < mp[inor[index]]) index=i; // tim vi tri goc chinh cua cac nhanh cay
	}
	node tmp=new Node(inor[index]);
	tmp->l=tao_tree(start,index-1,mp);  // noi tree tu ben trai
	tmp->r=tao_tree(index+1,end,mp);    // noi tree tu ben phai
	return tmp;
}
node tao_cay(){
	map<int,int> mp;
	for(int i=1;i<=n;i++){
		mp[lever[i]]=i;
	}
	return tao_tree(1,n,mp);
}
void duyet_postor(node x){
	if(x!=NULL){
		duyet_postor(x->l);
		duyet_postor(x->r);
		cout<<x->data<<" ";
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>inor[i];
		for(int i=1;i<=n;i++) cin>>lever[i];
		node x=tao_cay();
		duyet_postor(x);
		cout<<endl;
	}
}