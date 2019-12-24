#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
pair<int,node *> p;
class map{
    int buckets[10];
    public:
    pair<int,node *> hash(int key){
        p pi;
        pi->first=(key)%10;
        node *n=new node;
        n->next=NULL;
        n->data=key;
        node *temp=pi->second;
        if(temp==NULL)
         temp=n;
        else{
         while(temp->next!=NULL){
             temp=temp->next;        
         }
         temp->next=n;
        }
        return pi;
    }
    void insert(int key){
        p pi=hash(key);
    }
    void dele(int key){
        int hash=key%10;
        int flag
        while()
    }
};
int main(){
    
}