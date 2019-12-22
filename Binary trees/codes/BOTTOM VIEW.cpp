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

node *buildtree(){
	int data;
	cin>>data;
	if(data==-1)
	 return NULL;
	node *root=new node(data);
	root->left=buildtree();
	root->right=buildtree();
	return root;
}

