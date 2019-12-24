#include<bits/stdc++.h>
using namespace std;
int heighty=0;
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
}
int count=0;
int height(node *root){
	if(root==NULL)
	 return -1;
	return (max(height(root->left),height(root->right))+1);
}
void levelorder(node *root,int k){
	if(::count==1)
	 return ;
	if(root->data==-1)
	 return ;
	if(k==height(root)){
		::count=1;
		cout<<root->data;
		return ;
	}
	levelorder(root->left,k);
	levelorder(root->right,k);
}
void level(node *root,int k=heighty){
	if(k==-1){
		return ;
	}
	//cout<<root->data;
	::count=0;
	levelorder(root,k);
	cout<<" ";
	level(root,k-1);
}

int main(){
	node *root=buildtreeLevel();
	/*while(root->data!=-1){
		cout<<root->data<<" ";
		if(root->left->data!=-1)
    		root=root->left;
		else
			root=root->right;	
	}*/		                             //1 2 3 4 5 -1 6 -1 -1 -1 -1 -1 -1
	heighty=height(root);
	level(root);
	return 0;
}
