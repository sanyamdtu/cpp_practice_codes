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
node *buildtreeLevel()
{
    int d;
    cin>>d;
    queue<node *>q;
    node *root=new node(d);
    q.push(root);
    int c1,c2;
    while(!q.empty())
    {
        node *f=q.front();
        q.pop();
        cin>>c1>>c2;
        if(c1!=-1)
        {
            f->left=new node(c1);
            q.push(f->left);
        }
        if(c2!=-1)
        {
            f->right=new node(c2);
            q.push(f->right);
        }
    }
    return root;
}//
int height(node *root){
	if(root==NULL)
	 return -1;
	return (max(height(root->left),height(root->right))+1);
}
void levelorder(node *root,int k){
	if(root==NULL)
	 return ;
	if(k==height(root)){
		cout<<root->data<<" ";
		return ;
	}
	levelorder(root->left,k);
	levelorder(root->right,k);
}
void level(node *root,int k=0){
	if(k==height(root)){
		cout<<root->data;
		return ;
	}
	//cout<<root->data;
	levelorder(root,k);
	cout<<endl;
	level(root,k+1);
}
int main(){
   node *root=new node(0);	
   level(buildtreeLevel());
   return 0;
}
