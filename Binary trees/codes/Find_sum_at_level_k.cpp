#include <bits/stdc++.h>
using namespace std;
class node {
public :
    int nc;
    vector<node *> no ;
    int data ; 
    node(int d,int n) {
        data = d ;
        nc = n; 
    }
};


//Generic Tree Input
//Used in problem - Sum at level k
node* buildTreeGeneric(node *root){
    int d,n ;
    cin >> d >> n;
    root = new node(d,n);
    if(n==0)
        return root ; 
    else {
        for(int i=0;i<root->nc;i++){
            root->no[i]=buildTreeGeneric(root->no[i]);
        } 
        return root ;
    }
}
void levelorder(node *root){
    
}

int main() {
    node *root = NULL;

    //Generic Tree Input 
    root = buildTreeGeneric(root);          
    


    return 0;
}
