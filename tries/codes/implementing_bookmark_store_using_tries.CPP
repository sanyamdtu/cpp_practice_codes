#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    bool terminal;
    char data;
    map<char,node*> has;
    node(char data){
        this->data=data;
        this->terminal=false;
    }
};
class tries{
     public:
    node *root;
    int count;
    tries(){
        this->root=new node('\0');
        this->count=0;
    }
    void addstr(char str[]){
        node *temp=root;
        int i=0;
        for(int i=0;i<strlen(str);i++){
            if(temp->has.count(str[i])){
                temp=temp->has[str[i]];
            }
            else{
                node *n=new node(str[i]);
                temp->has[str[i]]=n;
                temp=n;
            }
        }
        temp->terminal=true;
    }
    bool search(char str[]){
        node *temp=root;
        int i=0;
        while(str[i]!='\0'){
            if(temp->has.count(str[i])){
                temp=temp->has[str[i]];
            }
            else{
                return false;
            }
            i++;
        }
        return temp->terminal;
    }
        
};

int main(){
    tries t;
    int n;
    cin>>n;
    while(n--){
        char str[100];
        cin>>str;
        t.addstr(str);
    }
    int q;
    cin>>q;
    while(q--){
        char st[100];
        cin>>st;
        cout<<t.search(st)<<endl;
    }
    return 0;
}