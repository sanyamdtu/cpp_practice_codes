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
	public :
    node *head;
    node *tail;
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
            cout<<temp->data<<" ";
            temp=temp->next;        
            }
        }
        void insert_at_middle(int data,int pos){
            int c=0;
            node *temp=new node(data);
            temp=head;
            while(temp!=NULL){
                temp=temp->next;
                c++;        
            }
            if(pos==0)
                insert_at_head(data);
            else if(pos<=c){
                node *n=new node(data);
                temp=head;
                while(--pos){
                	temp=temp->next;
				}  
				n->next=temp->next;
                temp->next=n;
            }  
			else{
				insert_at_tail(data);
			}          
        }
        void delete_at_head(){
        	head=head->next;
		}
		void delete_at_tail(){
			node *temp=head;
			while(temp->next!=tail){
				temp=temp->next;
			}
			temp->next=NULL;
			tail=temp;
		}
		void delete_at_middle(int pos){
            int c=0;
            node *temp=new node(0);
            temp=head;
            while(temp!=NULL){
                temp=temp->next;
                c++;        
            }
            if(pos==0)
             delete_at_head();
            else if(pos<=c){
            	temp=head;
                while(--pos){
                    temp=temp->next;
                }
                node *temp2=new node(0);
                temp2=temp->next;
                temp->next=temp2->next;
                delete temp2,temp;
            }
			else
			 delete_at_tail();         						
		}
		int search(int key,node *temp,int pos=0){
			if(temp==NULL)
			 return -1;
			 else{
			 	if(temp->data==key)
			 	 return pos;
			 	 else
			 	  return search(key,temp->next,pos+1);
			 }
		}
		void biuldlist(){
		        int num=0;
		        cin>>num;
				while(num!=-1){
			 	 insert_at_tail(num);			 	
                 cin>>num;
			    }
		}
		void reverse(){
			node *current=head;
			node *prev=NULL;
			node *n=new node(0);
			while(current!=NULL){
				n=current->next;
				current->next=prev;
				prev=current;
				current=n;
			}
			head=prev;
		}
};
int main(){
    Linkedlist ll;
	/*
    ll.insert_at_head(5);
    ll.insert_at_head(4);
    ll.insert_at_head(3);
    ll.insert_at_head(2);
    ll.insert_at_head(1);
    ll.print();
    cout<<endl;
    ll.delete_at_tail();
    ll.print();
    ll.delete_at_head();
    cout<<endl;
    ll.print();
    cout<<endl;
    ll.insert_at_head(5);
    ll.insert_at_head(4);
    ll.insert_at_head(3);
    ll.insert_at_head(2);
    ll.insert_at_head(1);
    ll.print();
    cout<<endl;                  important   istream & operator>>(istream &is,node *head){
     									buildlist(head);
     									return is;
     								}
    ll.delete_at_middle(1);
    ll.print();
    cout<<endl<<ll.search(4,ll.head);	
    ll.biuldlist();
    ll.print();
    ll.reverse();
    ll.print();*/
    int n,k,size;
    cin>>n;
    size=n;
	while(size--){
		int num;
		cin>>num;
		ll.insert_at_tail(num);
	}   
	cin>>k;
    k%=n;
	node *temp=ll.head;
	for(int i=n-k-1;i>0;i--){
		temp=temp->next;
	}
	ll.tail->next=ll.head;
	ll.head=temp->next;
	temp->next=NULL;
		
	/*size=n-k+1;
	cout<<"temp"<<temp->data<<endl;
	cout<<"size"<<size;
	int j=0;
	while(temp!=NULL){
		ll.insert_at_middle(temp->data,j);
		ll.delete_at_middle(size);
		ll.print();
		cout<<endl;
		size++;
		j++;
		temp=temp->next;
	}*/
	ll.print();
	
    return 0;    
}
