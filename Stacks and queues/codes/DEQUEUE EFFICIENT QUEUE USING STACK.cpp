#include<bits/stdc++.h>
using namespace std;
stack<int> pus(int data,stack<int> a){
	stack<int> b;
	while(!a.empty()){
		b.push(a.top());
		a.pop();
    }
    a.push(data);
    while(!b.empty()){
    	a.push(b.top());
    	b.pop();
	}
	//cout<<b.top()<<endl;
	return a;		   	
}
int main(){
	stack<int> p;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	p=pus(i,p);
	}
	while(!p.empty()){
		cout<<p.top()<<" ";
		p.pop();
	}
	return 0;
}

