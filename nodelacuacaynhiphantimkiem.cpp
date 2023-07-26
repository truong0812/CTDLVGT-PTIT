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

void duyet_tree(node a){
	if(a==NULL) return;
	if(a->l==NULL && a->r==NULL){
		cout<<a->data<<" ";
	}
	duyet_tree(a->l);
	duyet_tree(a->r);
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
		duyet_tree(a);
		cout<<endl;
	}
}