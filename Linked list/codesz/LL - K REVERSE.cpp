#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
}
void insert(Node *&head,int num){
    Node *temp,*ptr;
    ptr->data=num;
    ptr->next=NULL;
    temp=head;
    if(head==NULL)
        head=ptr;
    else{
        Node *last;
        last=head;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=ptr;
    }    
}
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;        
    }
}
void function(Node *head,int k){
    Node *temp;
    temp=head;
    while(temp){
        Node *last;
        last=head;
        while(last->next!=NULL){
            last=last->next;
        }
    }
}
int main() {
    Node *head=new Node;
    Node *temp;
    temp=head;
    int n,int k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>temp->data;
        temp=temp->next;
    }
    func(head);
    return 0;
}

