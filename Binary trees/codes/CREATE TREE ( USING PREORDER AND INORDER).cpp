/*#include<bits/stdc++.h>
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
	if(root->left)
	 cout<<root->left->data;
	else
	 cout<<"END";
	cout<<" => ";
    cout<<root->data<<" <= ";
    if(root->right)
	 cout<<root->right->data<endl;
	else
	 cout<<"END"<<endl;
	preorder(root->left);	
	preorder(root->right);
}
node *maketree(int in[],int pre[],int s,int e){
	static int i=0;
    if(s>e)	
     return NULL;
    node *root=new node(pre[i]);
     int index=-1;
     for(int j=s;j<=e;j++){ 
     	if(in[j]==pre[i]){
     		index=j;
     		break;
		 }
	 }
	 i++;
	 root->left=maketree(in,pre,s,index-1);
	 root->right=maketree(in,pre,index+1,e);
	 return root;
}
int main(){
	int n,m;
	cin>>m;
	int pre[m];
	for(int i=0;i<m;i++)
	cin>>pre[i];
	cin>>n;
	int in[n];
	for(int i=0;i<n;i++)
	 cin>>in[i];
	node *root=maketree(in,pre,0,n-1);
	preorder(root);	 
}*/
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
if(a==“true”)
root->left=buildtree(1);
if(a==“false”)
root->left=buildtree(0);
cin>>a;

	if(a=="true")

    	root->right=buildtree(1);

	if(a=="false")

		root->right=buildtree(0);

    return root;

}

else{

     return NULL;

}

}
struct pai{
	int height;
	bool ch;
};
pai bbt(node *n){
	pai p;
    if(n==NULL){
    	p.ch=1;
    	p.height=-1;
		return p;
	}
	pai left=bbt(n->left);
	pai right=bbt(n->right);
	int d=abs(left.height-right.height);
	if(left.ch && right.ch && d<=1){
		p.ch=1;
	}
	else{
		p.ch=0;
	}
	p.height=max(left.height,right.height)+1;//important to add 1
	return p;
}
int main(){
  node *	root=buildtree(1);
	pai p;
	p=bbt(root);
	if(p.ch)
	 cout<<"true";
	else{
		cout<<"false";
	}
	return 0;
}
