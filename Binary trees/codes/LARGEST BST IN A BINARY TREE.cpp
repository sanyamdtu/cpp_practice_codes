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
void inorder(node *root,vector <int> &v){
	  if(root==NULL){
	  	 v.push_back(-1);
	     return ;
	  }
	  inorder(root->left,v);
      v.push_back(root->data);	
	  inorder(root->right,v);
}
int func(vector<int> a,int n){
    int maxlength1=0,maxlength2=0,maxlength3=0,currentlength1=0,pivot=0,currentlength2=0,currentlength3=0;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            if(pivot){
                currentlength1++;
                maxlength1=max(maxlength1,currentlength1);
                currentlength1=1;
                pivot=0;
            }
            else
            currentlength1++;
            currentlength2++;
            currentlength3++;
            maxlength3=max(maxlength3,currentlength3);
            currentlength3=1;
        }
        else if(a[i]==a[i+1]){
            currentlength1++;
            currentlength2++;
            currentlength3++;
        }
        else{
            currentlength2++;
            maxlength2=max(maxlength2,currentlength2);
            currentlength2=1;
            currentlength3++;
            pivot=1;
            currentlength1++;
        }

    }
    maxlength1=max(maxlength1,++currentlength1);
    maxlength2=max(maxlength2,++currentlength2);
    maxlength3=max(maxlength3,++currentlength3);
    int ans=max(maxlength1,maxlength2);
    ans=max(ans,maxlength3);
    return ans;
}
int main(){
	int n;
	cin>>n;
	int in[n],pre[n];
	for(int i=0;i<n;i++)
	 cin>>pre[i];
	for(int i=0;i<n;i++)
	 cin>>in[i];
	node *root=maketree(in,pre,0,n-1);
	vector<int> v;
	inorder(root,v);
	cout<<func(v,n)-1;
	return 0;
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
void inorder(node *root,vector <int> &v){
	  if(root==NULL){
	  	 v.push_back(-1);
	     return ;
	  }
	  inorder(root->left,v);
      v.push_back(root->data);	
	  inorder(root->right,v);
}
int lenOfLongIncSubArr(vector<int> arr, int n) 
{ 
    // 'max' to store the length of longest 
    // increasing subarray 
    // 'len' to store the lengths of longest 
    // increasing subarray at diiferent  
    // instants of time 
    int max = 1, len = 1; 
      
    // traverse the array from the 2nd element 
    for (int i=1; i<n; i++) 
    { 
        // if current element if greater than previous 
        // element, then this element helps in building 
        // up the previous increasing subarray encountered 
        // so far 
        if (arr[i] > arr[i-1]) 
            len++; 
        else
        { 
            // check if 'max' length is less than the length 
            // of the current increasing subarray. If true,  
            // then update 'max' 
            if (max < len)     
                max = len; 
                  
            // reset 'len' to 1 as from this element 
            // again the length of the new increasing 
            // subarray is being calculated     
            len = 1;     
        }     
    } 
      
    // comparing the length of the last 
    // increasing subarray with 'max' 
    if (max < len) 
        max = len; 
      
    // required maximum length 
    return max; 
} 
int main(){
	int n;
	cin>>n;
	int in[n],pre[n];
	for(int i=0;i<n;i++)
	 cin>>pre[i];
	for(int i=0;i<n;i++)
	 cin>>in[i];
	node *root=maketree(in,pre,0,n-1);
	vector<int> v;
	inorder(root,v);
	cout<<lenOfLongIncSubArr(v,n);
	return 0;
}
