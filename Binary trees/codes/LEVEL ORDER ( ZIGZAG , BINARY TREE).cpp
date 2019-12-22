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

node *buildtree(bool ans){
	if(ans){
		int data;
    	cin>>data;
	    node *root=new node(data);
	    cin>>ans;
     	root->left=buildtree(ans);
     	cin>>ans;
	    root->right=buildtree(ans);
	    return root;
	}
	else{
	     return NULL;
	}
}
int height(node *root){
	if(root==NULL)
	 return -1;
	return (max(height(root->left),height(root->right))+1);
}
class pairs{
	public:
		int level;
		node *n;
		void lev(){
			level=height(n);
		}
};
void bfs(node *root){
    queue<node *> q;
    node *temp=root;
	q.push(temp);
	while(!q.empty()){
		node *n=q.front();
		int num=height(n);
		q.pop();
		cout<<n->data<<" ";
		if(num%2){
			if(n->left){
	    	n=n->left;
	    	q.push(n);	
		  }
		  if(n->right){
			n=n->right;
			q.push(n);
		  }
		}  
		else{
		  if(n->right){
			n=n->right;
			q.push(n);
		  }
		  if(n->left){
	    	n=n->left;
	    	q.push(n);	
		  }
		} 		
	}	
}
int main(){
	node* root=buildtree(1);
	bfs(root);	
}
