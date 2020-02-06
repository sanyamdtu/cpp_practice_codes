#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    
    //Constructor
    node(int d){
        data = d;
        next = NULL;
    }
};

/*
class LinkedList{
    node*head;
    node*tail;
public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insert(){
        
    }
    
};
*/
//Passing a pointer variable by reference 
void insertAtHead(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}

int length(node*head){
    
    int len=0;
    while(head!=NULL){
        head = head->next;
        len += 1;
    }
    return len;
}

void insertAtTail(node*&head,int data){
    
    if(head==NULL){
        head = new node(data);
        return;
    }
    node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void insertInMiddle(node*&head,int data,int p){
    
    if(head==NULL||p==0){
        insertAtHead(head,data);
    }   
    else if(p>length(head)){
        insertAtTail(head,data);
    }
    else{
        //Insert in the middle 
        //Take p-1 jumps
        int jump=1;
        node*temp = head;
        while(jump<=p-1){
            temp = temp->next;
            jump += 1;
        }
        
        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;
        
    }
}

bool searchRecursive(node*head,int key){
    if(head==NULL){
        return false;
    }
    //Rec Case 
    if(head->data ==key){
        return true;
    }
    else{
        return searchRecursive(head->next,key);
    }
}
bool searchIterative(node*head,int key){
    
    while(head!=NULL){
        if(head->data==key){
            return true;
        }
        head = head->next;
    }
    return false;
}

void print(node*head){
    //node*temp = head;
    
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}
void deleteAtHead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp = head;
    head = head->next;
    delete temp;
    return;
}

void deleteInTheMiddle(node*head,int p){
    //Homework 
}

node* midPoint(node*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    
    node*slow = head;
    node*fast = head->next;
    
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
    
}

void reverse(node*&head){
    
    node*C = head;
    node*P = NULL;
    node*N;
    
    while(C!=NULL){
        //Save the next node 
        N = C->next;
        //Make the current node point to prev 
        C->next = P;
        //Just update prev and current
        P = C;
        C= N;
    }
    head = P;
}

node* reverseRec(node*head){
    //Base Case 
    if(head->next==NULL||head==NULL){
        return head;
    }
    //Rec Case
    node*smallHead = reverseRec(head->next);
    node*C = head;
    C->next->next = C;
    C->next = NULL;
    return smallHead;
    
}

node* mid(node*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node*slow = head;
    node*fast = head->next;
    
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

void buildList(node*&head){
    
    int data;
    cin>>data;
    
    while(data!=-1){
        insertAtTail(head,data);
        cin>>data;
    }
}

istream& operator>>(istream &is,node*&head){
    buildList(head);
    return is;
}

ostream& operator<<(ostream &os,node*head){
    print(head);
    return os;
}
node* merge(node* a, node* b)  
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
        result->next = merge(a->next, b);  
    }  
    else
    {  
    cout<<"a->data"<<a->data<<" "<<"b->data "<<b->data<<" \n";
      
        result = b;  
        result->next = merge(a, b->next);  
    }  
    cout<<"List";
    cout<<result->data<<" ";
    return result;  
}

node *mergesort(node *head){
    if(head==NULL || head->next==NULL)
        return head;

        node *mide=mid(head);
        node *a=head;
        node *b=mide->next;
        mide->next=NULL;
        a=mergesort(a);
        b=mergesort(b);
        node *c=merge(a,b);
        return c;

}

int main() {
    node*head = NULL;
    cin>>head;
    head=mergesort(head);
    cout<<head;
    return 0;
}
