#include<bits/stdc++.h>
using namespace std;
//#include<bits/stdc++.h>
//using namespace std;
/*class que{
	int arr[100];
	int front;
	int rear;
	int cs;
	int ms;	
	public:
	 que(int size){
	  this->ms=size;
	  this->rear=0;
	  this->front=0;
	  this->cs=0;	 	 
	 } 
	 bool isfull(){
	 	return this->cs==this->ms;
	 }
	 bool empty(){
	 	return this->cs==0;
	 }
	 void push(int data){
	 	if(!this->isfull()){
	 		this->rear=(this->rear+1)%this->ms;
	 		this->arr[this->rear]=data;
	 		this->cs++;
		 }
	 }	
	 void pop(){
	 	if(!this->empty()){
	 		this->front=(this->front+1)%this->ms;
	 		this->cs--;
		 }
	 } 	 
	 int getfront(){
	 	return this->arr[this->front];
	 }
};*/
int main(){
	int n,time=0;
	cin>>n;
	int k=0;
	queue<int> qi,qc;
	for(int i=0;i<n;i++){
		cin>>k;
		qc.push(k);
	}
	for(int i=0;i<n;i++){
		cin>>k;
		qi.push(k);
	}
/*	while(!qi.empty()){
		cout<<qi.getfront()<<" ";
		qi.pop();		
	}
	*/
	while(!qi.empty()){
	    if(qi.front()==qc.front()){
	    	//time+=qi.getfront();
	    	time++;
			qi.pop();
	    	qc.pop();
		}
		else{
			int num=qc.front();
			qc.pop();
			qc.push(num);
			time++;
		}		
	}
	cout<<time;
	return 0;
}
