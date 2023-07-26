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

void them_not(node &a,int x){  // them not vao cay
	if(a==NULL){    // not la goc hoac vi tri can them
		node p=new Node(x);
		a=p;
	}
	else{
		if(x < a->data) them_not(a->l,x);  // nho hon nen tim sang trai
		if(x > a->data) them_not(a->r,x);  // lon hon nen tim sang phai
	}
}
void duyet_inorder(node a){
	if(a!=NULL){
		cout<<a->data<<" ";
		duyet_inorder(a->l);
		duyet_inorder(a->r);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		node a=NULL;
		while(n--){
			int x; cin>>x;
			them_not(a,x);
		}
		duyet_inorder(a);
		cout<<endl;
	}
}