#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *next;
        node(int d){
            data=d;
            next=NULL;
        }
};
class Linkedlist{
    node *head;
    node *tail;
    public:
        Linkedlist(){
            head=NULL;
            tail=NULL;
        }
        void insert_at_tail(int data){
            node *n=new node(data);
            if(head==NULL)
               head=tail=n;
            else{ 
              tail->next=n;
              tail=n;
            }
        }
        void insert_at_head(int data){
            node *n=new node(data);
            if(head==NULL)
            head=tail=n;
            else{
                n->next=head;
                head=n;
            }
            
        }
        void print(){
            node *temp=new node(0);
            temp=head;
            while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;        
            }
        }
        void insert_at_middle(int data,int pos){
            int c=0;
            node *temp=new node(0);
            temp=head;
            while(temp!=NULL){
                temp=temp->next;
                c++;        
            }
            if(head==NULL|| pos==0)
                insert_at_head(data);
            else if(pos<=c){
                node *n=new node(data);
                int jump=1;
                node *temp2=head;
                while(jump<=c-1){
                    temp=temp->next;
                     
                }
            }            
        }
};
int main(){
    Linkedlist ll;
    int n,k;
    
    ll.print();
    return 0;    
}
