#include<bits/stdc++.h>
using namespace std;
int b[10001],dem;
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

void them_node(node &a,int x){  // them not vao cay
	if(a==NULL){    // not la goc hoac vi tri can them
		node p=new Node(x);
		a=p;
	}
	else{
		if(x < a->data) them_node(a->l,x);  // nho hon nen tim sang trai
		if(x > a->data) them_node(a->r,x);  // lon hon nen tim sang phai
	}
}

void Build(node &a, int left, int right) {
	if (left >= right)return;
	int mid = (left + right) / 2;
	them_node(a, b[mid]);
    Build(a, left, mid);
    Build(a, mid + 1, right);
}
void solve(node a){
    if(a==NULL) return;
	if(a->l==NULL && a->r==NULL){
		dem++;
	}      
	solve(a->l);
	solve(a->r); 
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		dem=0;
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(b,b+n,greater<>());
		node a=NULL;
		Build(a,0,n);
		solve(a);
		cout<<dem<<endl;
	}
}