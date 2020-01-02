#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node *right;
    node *left;
};

void add(int n,node *head){
    node *curr=head;
    for(int i=31;i>=0;i--){
        int bit=(n>>i)&1;
        if(bit==0){
            if(curr->left==NULL)
             curr->left=new node();
            curr=curr->left;
        }
        else{
            if(curr->right==NULL)
             curr->right=new node();
            curr=curr->right;
        }
    }
}    
int maxpair(node *head,int arr[],int n,int el){
    int maxxor=INT_MIN;
    int value=el;
    node *curr=head;
    int currxor=0;
    for(int i=31;i>=0;i--){
        int bit=(value>>i)&1;
        if(bit==0){//if setbit is 0 then i should ideallly go to right
            if(!curr->right)
                curr=curr->left;
            else
            {
                curr=curr->right;
                currxor+=(int)pow(2,i);
            }
        }
        else{//if setbit is 1 then i should ideallly go to left
            if(!curr->left)
              curr=curr->right;
            else{
                curr=curr->left;
                currxor+=(int)pow(2,i);
            }
        }

    }
    if(currxor>maxxor){
        maxxor=currxor;
    }
    return maxxor;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    for(int i=1;i<n;i++){
        arr[i]=arr[i]^arr[i-1];
    }
     int resut=INT_MIN;
     int x=0;
    node *head=new node();
    for(int i=0;i<n;i++){
        add(arr[i],head);
        x=maxpair(head,arr,n,arr[i]);
        resut=(resut>x)?resut:x;
    }
    cout<<resut;
    return 0;     
}