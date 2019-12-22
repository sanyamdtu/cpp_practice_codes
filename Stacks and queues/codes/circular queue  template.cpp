#include<bits/stdc++.h>
using namespace std;
template<typename T>
class queue{
	T *arr;
	int front;
	int rear;
	int cs;
	int ms;	
	public:
	 queue(int size){
	  ms=size;
	  rear=0;
	  front=0;
	  cs=0;	 	 
	 } 
	 bool isfull(){
	 	return cs==ms;
	 }
	 bool empty(){
	 	return cs==0;
	 }
	 void push(T data){
	 	if(!isfull()){
	 		rear=(rear+1)%ms;
	 		arr[rear]=data;
	 		cs++;
		 }
	 }	
	 void pop(){
	 	if(!empty()){
	 		front=(front+1)%ms;
	 		cs--;
		 }
	 } 	 
	 T getfront(){
	 	return arr[front];
	 }
};
