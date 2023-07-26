#include<bits/stdc++.h>
using namespace std;
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
void them_node(node &a,int x){
	if(a==NULL){
		a=new Node(x);
	}
	else{
		if(x < a->data) them_node(a->l,x);
		if(x > a->data) them_node(a->r,x);
	}
}

void duyet_sau(node a){
	if(a==NULL) return;
	duyet_sau(a->l);
	duyet_sau(a->r);
	cout<<a->data<<" ";
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		node a=NULL;
		for(int i=0;i<n;i++){
			int x; cin>>x;
			them_node(a,x);
		}
		duyet_sau(a);
		cout<<endl;
	}
}