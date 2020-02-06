#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node *right;
    node *left;
};

void add(long long int n,node *head){
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
long long int maxpair(node *head,long long int arr[],long long int n,long long int el){
    long long int maxxor=INT_MIN;
    long long int value=el;
    node *curr=head;
    long long int currxor=0;
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
    long long int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++)
     cin>>arr[i];
    for(long long int i=1;i<n;i++){
        arr[i]=arr[i]^arr[i-1];
    }
    long long int resut=INT_MIN;
    long long int x=0;
    node *head=new node();
    for(long long int i=0;i<n;i++){
        add(arr[i],head);
        x=maxpair(head,arr,n,arr[i]);
        resut=(resut>x)?resut:x;
    }
    cout<<resut;
    return 0;     
}