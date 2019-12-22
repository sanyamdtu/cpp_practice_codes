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
            cout<<temp->data<<"-> ";
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
/*node* check(node *a,node *b){
	if(a==NULL)
		return b;
	else if(b==NULL)9
	    return a;
	node *c=NULL;
	if(a->data < b->data){
		c=a;
		c->next=check(a->next,b);						
	}
	else{
		c=b;
		c->next=check(a,b->next);
	}
	return c;		
}*/
node* SortedMerge(node* a, node* b)  
{  
    node* result = NULL;  
    //cout<<"bro";
    /* Base cases */
    if(a==NULL) {
    	cout<<"a is NULL";
    	return b;
	} 
    if(b==NULL) {
    	cout<<"b is NULL";
    	return a;
	}
        //return a;  
    //cout<<"wah";
    /* Pick either a or b, and recur */
    if (a->data <= b->data)  
    {  
    cout<<"a->data"<<a->data<<" "<<"b->data "<<b->data<<" \n";
        result = a;  
        result->next = SortedMerge(a->next, b);  
    }  
    else
    {  
    cout<<"a->data"<<a->data<<" "<<"b->data "<<b->data<<" \n";
      
        result = b;  
        result->next = SortedMerge(a, b->next);  
    }  
    cout<<"List";
    cout<<result->data<<" ";
    return result;  
}  
int main(){
    Linkedlist ll1,ll2,ll3;
    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1;
        for(int i=0;i<n1;i++){
            int num;
            cin>>num;
            ll1.insert_at_tail(num);
        }
        cin>>n2;
        for(int i=0;i<n2;i++){
            int num;
            cin>>num;
            ll2.insert_at_tail(num);
        }
       // cout<<ll1.head->data;
        //cout<<ll2.head->data;
        ll1.print();
        cout<<endl;
        ll2.print();
        ll3.head = SortedMerge(ll1.head,ll2.head);
        ll3.print();
        cout<<endl;
        ll1.print();
        cout<<endl;
        ll2.print();
        
        
    }
    return 0;    
}
/*1
4
1 3 5 7
3
2 4 6*/
