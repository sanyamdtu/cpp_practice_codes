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
	string a;	
	cin>>data;
	node *root=new node(data);
	cin>>a;
	if(a.compare(0,4,"true",4)==0)
	root->left=buildtree(1);
	if(a.compare(0,5,"false",5)==0)
	root->left=buildtree(0);
	cin>>a;
		if(a.compare(0,4,"true",4)==0)
	    	root->right=buildtree(1);
	
		if(a.compare(0,5,"false",5)==0)
			root->right=buildtree(0);
	    return root;
}

else{

     return NULL;

}

}


bool is_identical(node* a, node* b){
    if(!a && !b)
        return true;
    if(!a && b)
        return false;
    if(a && !b)
        return false;

    if(is_identical(a->left, b->left) && is_identical(a->right, b->right))
        return true;
    return false;
}


void preorder(node *root,vector<int> &v){
	  if(root==NULL){
	   return ;
	  }
      v.push_back(root->data);
	  preorder(root->left,v);	
	  preorder(root->right,v);
    }
void inorder(node *root,vector <int> &v){
	  if(root==NULL){
	     return ;
	  }
	  inorder(root->left,v);
      v.push_back(root->data);	
	  inorder(root->right,v);
    }

int main(){
	node *root1=buildtree(1);
	node *root2=buildtree(1);
//	cout<<root1->data;
//	cout<<root2->data;
	/*vector <int> vi1,vi2,vp1,vp2;
	preorder(root1,vp1);
	preorder(root2,vp2);
//	10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
	inorder(root1,vi1);
	inorder(root2,vi2);
	if(vi1==vi2 && vp1==vp2)
	 cout<<"true";
	else
	 cout<<"false";
	 */
	is_identical(root1, root2)? cout<<"true" : cout<<"false";
	return 0;
			
}
