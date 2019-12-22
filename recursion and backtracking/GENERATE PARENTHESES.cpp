#include<bits/stdc++.h>
using namespace std;

void print(int i,int n,string s,int count){
    if(i==2*n){
        if(count==0)
            cout<<s<<endl;
    }
    if(!count)
        return ;

    s.push_back('(');
    print(i+1,n,s,count+1);
    s.pop_back();
    s.push_back(')');
    print(i+1,n,s,count-1); 
}
void printWellFormedParanthesis(int n){
    
    // Write your code here
    print(1,n,"(",1);

}
int main(){
	int n;
	cin>>n;
	printWellFormedParanthesis(int n);	
}
