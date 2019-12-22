#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *left;
		node *right;
		node(int d){
			data=d;
			left=NULL;
			right=NULL;
		}
};
node *insertbst(node *root,int data){
	if(root==NULL)
	return new node(data);
	if(root->data>data){
		root->left=insertbst(root->left,data);
	} 
	else{
		root->right=insertbst(root->right,data);
	}
	return root;
}
node *buildbst(int n,int i=0){
     node *root=NULL;
     int data;
     while(i<n){
     	cin>>data;
	 	root=insertbst(root,data);
	 	i++;
	 }
	 return root;	
}
void inorder(node *root,int l,int r){
	if(root==NULL){
	   return ;
	}
	if(root->data>=r || root->data>=l)
	inorder(root->left,l,r);
	if(root->data>=l && root->data<=r)
    cout<<root->data<<" ";	
    if(root->data<=r || root->data<=l)
	inorder(root->right,l,r);
}
void preorder(node *root){
	if(root==NULL){
	   return ;
	}
    cout<<root->data<<" ";
	preorder(root->left);	
	preorder(root->right);
}
int main(){
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   node *root=buildbst(n);
	   int l,r;
	   cin>>l>>r;
	   cout<<"# Preorder : ";
	   preorder(root);
	   cout<<endl<<"# Nodes within range are : ";
	   inorder(root,l,r);		
	}
	return 0;
}
