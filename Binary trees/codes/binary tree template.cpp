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
void preorder(node *root){
	if(root==NULL){
	   return ;
	}
    cout<<root->data<<" ";
	preorder(root->left);	
	preorder(root->right);
}
void inorder(node *root){
	if(root==NULL){
	   return ;
	}
	inorder(root->left);
    cout<<root->data<<" ";	
	inorder(root->right);
}
void postorder(node *root){
	if(root==NULL){
	   return ;
	}
	postorder(root->left);	
	postorder(root->right);
    cout<<root->data<<" ";
}
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
class pairs{
	public:
		int level;
		node *n;
		void lev(){
			level=height(n);
		}
};
void bfs(node *root){
    queue<pairs> q;
    pairs temp;
    temp.n=root;
    temp.lev();
	q.push(temp);
	int num=height(root);
	while(!q.empty()){
		pairs s=q.front();
		q.pop();
		if(num!=s.level){
			num=s.level;
			cout<<endl;
		}
		cout<<s.n->data<<" ";
	    if(s.n->left){
	    	s.n=s.n->left;
	    	s.lev();
		   	q.push(s);	
		}
		if(s.n->right){
			s.n=s.n->right;
			s.lev();
			q.push(s);
		}   		
	}	
}
int diameter(node *root){
    if(root==NULL)
	 return 0;
	else{
		int h1=height(root->left);
		int h2=height(root->right);
		int h3=(h1+h2+2);
		return max(h1,max(h2,h3));
	}	
}
struct dia{
	int height;
	int diameter;
};
dia fast_diameter(node *root){
	dia p;
	if(root==NULL){
		p.diameter=0;
		p.height=0;
		return p; 
	}
	dia left=fast_diameter(root->left);
	dia  right=fast_diameter(root->right);
	p.height=(max(left.height,right.height)+1);
	p.diameter=max(max(left.diameter,right.diameter),left.height+right.height);
	return p;
}
int sum(node *root){
	if(!root)
	 return 0;
	if(root->left==NULL && root->right==NULL){
		return root->data;
	}
	else{
		 int temp=root->data;
		 root->data=(sum(root->left)+sum(root->right));
		 return temp+root->data;
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
node *buildbst(){
     node *root=NULL;
     int data;
     cin>>data;
	 while(data!=-1){
	 	root=insertbst(root,data);
	    cin>>data;
	 }
	 return root;	
}
node *deletebst(node *root,int data){
    if(root==NULL)
     return NULL;
	if(root->data>data){
		root->left=deletebst(root->left,data);
		return root;
	}
	else if(root->data==data){
	    if(root->left==NULL && root->right==NULL){
	    	delete root;
	    	return NULL;
		}		
		else if(root->left==NULL){
			node *temp=root->right;
            delete root;
			return temp;		
		}
		else if(root->right==NULL){
			node *temp=root->left;
			delete root;
			return temp;
		}
		else{
			node *temp=root->right;
			while(!temp->right){
				temp=temp->right;
			}
			root->data=temp->data;
			root->right=deletebst(temp,temp->data);
		}
	    return root;
	}
	else{
		root->right=deletebst(root->right,data);
		return root;
	}
}
bool checkbst(node *root,int min=INT_MIN,int max=INT_MAX){
	if(root==NULL)
	 return true;
	if(checkbst(root->left,min,root->data) && checkbst(root->right,root->data,max) && root->data<=max && root->data>=min){
	  return true;
	 }
	 return false;
}
class linkedlist{
	public:
		node* head;
		node*tail;
};
linkedlist flatten(node *root){
	linkedlist ll;
	if(root->left==NULL && root->right==NULL){
		ll.head=ll.tail=root;
		return ll;
	}
	else if(root->left==NULL){
		linkedlist lefty=flatten(root->right);
		root->right=lefty.head;
		ll.head=root;
		ll.tail=lefty.tail;
		return ll;
	}
	else if(root->right==NULL){
		linkedlist righty=flatten(root->left);
		righty.tail->right=root;
		ll.head=righty.head;
		ll.tail=root;
		return ll;		
    }
    else{
    	linkedlist lefty=flatten(root->left);
    	linkedlist righty=flatten(root->right);
    	lefty.tail->right=root;
    	root->right=righty.head;
    	ll.head=lefty.head;
    	ll.tail=righty.tail;
    	return ll;
	}

}
int main(){
	//inorder(root);	cout<<height(root)
    //bfs(root);
    //cout<<diameter(root);
   // dia d;
    //d=fast_diameter(root);
    //cout<<d.diameter;
    //level(root);
    //int t=sum(root);
    //level(root);
    /*pai h=bbt(root);
    if(h.ch)
     cout<<"balanced";
    else{
    	cout<<"not balanced";
	}
	*/
	/*
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	level(a(arr,0,n-1));
	int n;
	int in[]={3,2,8,4,1,6,7,5};
	int pre[]={1,2,3,4,8,5,6,7};
	 n=sizeof(in)/sizeof(n);
	preorder(maketree(in,pre,0,8));
	*/
	node *root=buildbst();
	//inorder(root);
//	int data;
//	cin>>data;
//	deletebst(root,data);
//	inorder(root);
    //cout<<checkbst(root);
	linkedlist ll=flatten(root);
    node *temp=ll.head;
	    while(!temp){
    	cout<<temp->data<<"->";
        temp=temp->right;
	}
	return 0;
}
//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

