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
node *a(int arr[],int s,int e){
	if(s>e){
		return NULL;
	}
	int mid=(s+e)/2;
	node *root=new node(arr[mid]);
	root->left=a(arr,s,mid-1);
	root->right=a(arr,mid+1,e);
	return root;
}
void inorder(node *root){
	if(root==NULL){
	   return ;
	}
	inorder(root->left);
    cout<<root->data<<" ";	
	inorder(root->right);
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
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		node *root=a(arr,0,n-1);
		preorder(root);
	}
	return 0;
}

