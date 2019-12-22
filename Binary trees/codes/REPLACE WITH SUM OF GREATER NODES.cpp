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

void preorder(node *root){
	if(root==NULL){
	   return ;
	}
    cout<<root->data<<" ";
	preorder(root->left);	
	preorder(root->right);
}
int sum(int arr[],int n,int key){
	int s=key;
	for(int i=0;i<n;i++){
		if(arr[i]>key)
		s+=arr[i];
	}
	return s;
}
void func(node *root,int n,int arr[]){
	if(root==NULL){
		return ;
	}
	root->data=sum(arr,n,root->data);
	func(root->left,n,arr);
	func(root->right,n,arr);
}

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
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	node *root=a(arr,0,n-1);
	func(root,n,arr);
	preorder(root);
}

