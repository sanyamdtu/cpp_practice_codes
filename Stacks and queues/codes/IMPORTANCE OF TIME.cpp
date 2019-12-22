#include<bits/stdc++.h>
using namespace std;
//#include<bits/stdc++.h>
//using namespace std;
class que{
	int arr[5];
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
};
int main(){
	int n=5,time=0;
	cin>>n;
	int k=0;
	que qi(5);
	que qc(5);
	for(int i=0;i<5;i++){
		cin>>k;
		qi.push(k);
	}
	for(int i=0;i<5;i++){
		cin>>k;
		qc.push(k);
	}
	cout<<endl;
/*	while(!qi.empty()){
		cout<<qi.getfront()<<" ";
		qi.pop();		
	}
	*/
	while(!qi.empty()){
	    if(qi.getfront()==qc.getfront()){
	    	//time+=qi.getfront();
	    	time++;
			qi.pop();
	    	qc.pop();
		}
		else{
			time++;
			int num;
			num=qc.getfront();
			qc.pop();
			qc.push(num);
		}		
	}
	cout<<time;
	return 0;
}
